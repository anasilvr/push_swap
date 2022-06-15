/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:05:23 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 12:46:28 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_ps *to_sort)
{
	int	i;
	int j;
	int k;
	int maxb;
	int u;

	i = -1;
	j = 0;
	u = 0;
	maxb = find_maxb(to_sort->c.total);
	while (++i < maxb)
	{
		while (j++ < to_sort->c.total)
		{
			k = find_n(&to_sort->a);
			if (((k >> i) & 1) == 0)
				push_b(&to_sort->a, &to_sort->b);
			else
				rotate_a(&to_sort->a);
		}
		j = 0;
		while (to_sort->b.total != 0)
			push_a(&to_sort->a, &to_sort->b);
	}
	return;
}