/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:09:56 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 13:55:37 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	small_sort(t_ps *to_sort)
{
	if (to_sort->a.total == 2)
		swap_a(&to_sort->a);
	else if (to_sort->a.total == 3)
		sort_3(&to_sort->a);
	else
		sort_le_5(&to_sort->a, &to_sort->b);
}

void	sort_3(t_stack *a)
{
	int	max;

	max = find_largest(a);
	if (max == a->nbr[1])
		revrotate_a(a);
	else if (max == a->nbr[2])
		rotate_a(a);
	if (!is_ordered(a))
		swap_a(a);
}

void	sort_le_5(t_stack *a, t_stack *b)
{
	int	i;

	if (a->total == 5)
		i = (a->total / 2) + 1;
	else
		i = a->total / 2;
	while (a->total > 3)
	{
		if (top(a) < i - 1)
			push_b(a, b);
		else
			rotate_a(a);
	}
	sort_3(a);
	while (b->total > 0)
		push_a(a, b);
	if (top(a) != 0)
		swap_a(a);
}
