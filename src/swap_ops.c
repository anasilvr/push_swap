/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:40 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/25 15:04:19 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** [swap_a]: Swap the first 2 elements at the top of stack a.
** 	Do nothing if there is only one or no elements.
** [swap_b]: Swap the first 2 elements at the top of stack b.
** 	Do nothing if there is only one or no elements.
** [swap_both] : swap_a and swap_b at the same time.
*/

static void	swap(t_stack *src)
{
	int	tmp;

	tmp = src->nbrs[src->total];
	src->nbrs[src->total] = src->nbrs[src->total - 1];
	src->nbrs[src->total - 1] = tmp;
}

void	swap_a(t_pushswap *src)
{
	if (src->a.total > 1)
		swap(&src->a);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_pushswap *src)
{
	if (src->b.total > 1)
		swap(&src->b);
	ft_putendl_fd("sb", 1);
}

void	swap_both(t_pushswap *src)
{
	if (src->a.total > 1)
		swap(&src->a);
	if (src->b.total > 1)
		swap(&src->b);
	ft_putendl_fd("ss", 1);
}