/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:40 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 22:54:13 by marvin           ###   ########.fr       */
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
	int	i;
	int	tmp;

	i = src->total - 1;
	tmp = src->nbr[i];
	src->nbr[i] = src->nbr[i - 1];
	src->nbr[i - 1] = tmp;
}

void	swap_a(t_stack *src)
{
	if (src->total > 2)
		swap(src);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_stack *src)
{
	if (src->total > 2)
		swap(src);
	ft_putendl_fd("sb", 1);
}

void	swap_both(t_ps *src)
{
	swap(&src->a);
	swap(&src->b);
	ft_putendl_fd("ss", 1);
}