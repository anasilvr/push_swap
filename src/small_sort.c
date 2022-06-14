/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:09:56 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 14:35:26 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_ps *to_sort)
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

	while (i < to_sort->a->total)
	{
		if (to_sort->a->nbr[to_sort->a->total - i] == to_sort->c->nbr[i])
			i++;
		if (to_sort->a->nbr[i] > median)
		{
			push_b(to_sort);
		}
		i++;
	}
}

void	sort_array_c(t_ps *pile)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < pile->c->total)
	{
		j = i - 1;
		key = pile->c->nbr[i];
		while (j >= 0 && pile->c->nbr[j] > key)
		{
			pile->c->nbr[j + 1] = pile->c->nbr[j];
			j--;
		}
		pile->c->nbr[j + 1] = key;
		i++;
	}
}
