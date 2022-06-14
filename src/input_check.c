/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:11:30 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:11:51 by ana              ###   ########.fr       */
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

int	input_check(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[i])
	{
		if (!is_int_valid(av[i]))
			return (false);
		while (av[j])
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (false);
			j++;
		}
	i++;
	j = i + 1;
	}
	return (true);
}


int	is_int_valid(char *str)
{
	int	i;

	i = 0;
	if (ft_atol(str) < INT_MIN || ft_atol(str) > INT_MAX)
		return (false);
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

int	is_sorted(t_stack *src)
{
	int	i;

	i = 0;
	while (i < src->total)
	{
		if (src->nbr[i] < src->nbr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
