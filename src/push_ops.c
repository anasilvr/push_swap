/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:08:09 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 13:54:39 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** push:
** push_a: Take the first element at the top of b and put it at the top of a.
** 	Do nothing if b is empty.
** push_b: Take the first element at the top of a and put it at the top of b.
** 	Do nothing if a is empty.
*/

static int	pop(t_stack *src)
{
	int	top;

	top = src->nbr[src->total - 1];
	src->total--;
	return (top);
}

static void	push(t_stack *src, int topush)
{
	src->nbr[src->total] = topush;
	src->total++;
}

void	push_a(t_stack *a, t_stack *b)
{
	if (b->total != 0)
		push(a, pop(b));
	ft_putendl_fd("pa", 1);
}

void	push_b(t_stack *a, t_stack *b)
{
	if (a->total != 0)
		push(b, pop(a));
	ft_putendl_fd("pb", 1);
}
