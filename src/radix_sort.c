/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:05:23 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/17 17:24:26 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSD -> MST. Reads digits from left to right.
** Worst case: all elements have the same number of digits except one.
** Best case: all elements have the same number of digits.
**
** Every time the digit evaluated is a 0, push_b. (0 & 1 == 0)
** Else, rotate_a, and test next element.
** When every element on Stack A has been tested (j < size is false),
** reintegrate the stacks (push_a until b.total = 0) and test next digit.
*/

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
