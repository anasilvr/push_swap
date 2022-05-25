/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:09:56 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/25 15:44:28 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_pushswap *to_sort)
{
	int	i;
	int	smallest;
	int	largest;
	int	median;

	i = 0;
	smallest = find_smallest(to_sort);
	largest = find_largest(to_sort);
	copy_stack(&to_sort->a, &to_sort->c);
	median = define_median(to_sort);

	while (i < to_sort->a.total)
	{
		if (to_sort->a.nbrs[to_sort->a.total - i] == to_sort->c.nbrs[i])
			i++;
		if (to_sort->a.nbrs[i] > median)
		{
			push_b(to_sort);
		}
		i++;
	}
}

void	sort_array_c(t_pushswap *pile)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < pile->c.total)
	{
		j = i - 1;
		key = pile->c.nbrs[i];
		while (j >= 0 && pile->c.nbrs[j] > key)
		{
			pile->c.nbrs[j + 1] = pile->c.nbrs[j];
			j--;
		}
		pile->c.nbrs[j + 1] = key;
		i++;
	}
}
