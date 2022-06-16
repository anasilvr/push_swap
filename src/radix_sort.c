/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:05:23 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/16 18:07:05 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_ps *s)
{
	int	size;
	int	maxb;
	int	i;
	int	j;
	int	nb;

	size = s->a.total;
	maxb = find_maxb(s->c.total - 1);
	i = -1;
	j = 0;
	while (++i < maxb)
	{
		while (j++ < size)
		{
			nb = top(&s->a);
			if (((nb >> i) & 1) == 0)
				push_b(&s->a, &s->b);
			else
				rotate_a(&s->a);
		}
		j = 0;
		while (s->b.total > 0)
			push_a(&s->a, &s->b);
	}
	return ;
}
