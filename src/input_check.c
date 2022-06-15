/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:11:30 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 12:38:27 by anarodri         ###   ########.fr       */
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

int	valid_strargv(char **argv)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		if (!valid_int(tmp[i]))
		{
			free_table(tmp);
			return (0);
		}
		while (tmp[j])
		{
			if (ft_atol(tmp[i]) == ft_atol(tmp[j]))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	free_table(tmp);
	return (i);
}

int	valid_int(char *nb)
{
	int	i;

	i = 0;
	if (ft_atol(nb) < INT_MIN || ft_atol(nb) > INT_MAX)
		return (0);
	if (nb[0] == '-')
		i++;
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_ordered(t_stack *src)
{
	int	i;

	i = 0;
	while (i < src->total - 1)
	{
		if (src->nbr[i + 1] > src->nbr[i])
			return(0);
		i++;
	}
	return(1);
}
