/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:08:09 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 14:35:40 by ana              ###   ########.fr       */
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

static int	poptop(t_stack *src)
{
	int	top;

	top = src->nbr[src->total - 1];
	src->total--;
	return (top);
}

static void	push(t_stack *src, int topush)
{
	src->nbr[src->total] = topush;
}

void	push_a(t_ps *src)
{
	if (src->b->total > 0)
	{
		push(&src->a, poptop(&src->b));
		src->a->total++;
		ft_putendl_fd("pa", 1);
	}
}

void	push_b(t_ps *src)
{
	if (src->a->total > 0)
	{
		push (&src->b, poptop(&src->a));
		src->b->total++;
		ft_putendl_fd("pb", 1);
	}
}

/* Como juntar tudo numa função só passando src, dts e str à ser printada?
void	push_ops(t_stack *src, t_stack *dst, char *str)
{
	if (src->total > 0)
	{
		push ((&dst), poptop(&src));
		src->total--;
		dst->total++;
		ft_putstr_fd(str, 1);
	}
}*/