/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:11:30 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 14:11:38 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Step 1: Receive and validate input (parse and check)
** (If ARG == char* -> ft_split -> ft_atol)
**	 #Is it more than one (argc > 2)
**	 #Is it all ints? (ft_isint)
**	 #Is there any duplicates?
** When false: stops and prints "Error\n"
**
** Step 2: Populate stack a and c.
**
** Step 3: Sort stack c.
**
** Step 4: Compare indexes between a and c to guide swaps.
**
** swap_2, swap_3, swap_5...
** smallsort if count < 100;
** bigsort if count > 100;
**
** !0 = true
**
*/

#include "../include/push_swap.h"

int	input_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	if (argc == 2 && is_strargv_valid(argv) == 0)
		return (0);
	if (argc > 2)
	{
		if (is_int_valid(argv[i]) == 0)
			return (0);
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	is_strargv_valid(char **argv)
{
	char	**data;
	int		i;
	int		j;

	i = 0;
	j = 1;
	data = ft_split(argv[1], ' ');
	while (data[i])
	{
		if (ft_isdigit((int)data[i]) == 0)
		{
			free_table(data);
			return (0);
		}
		while (data[j])
		{
			if (ft_atol(data[i]) == ft_atol(data[j]))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	free_table(data);
	return (1);
}

int	is_int_valid(char *str)
{
	int	i;

	i = 0;
	if (ft_atol(str) < INT_MIN || ft_atol(str) > INT_MAX)
		return (0);
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
