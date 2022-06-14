/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:45:27 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 14:35:40 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** [revrotate_a]: Shift down all elements of stack a by 1.
** 	The last element becomes the first one.
** [revrotate_b]: Shift down all elements of stack b by 1.
** 	The last element becomes the first one.
** [revrotate_both] : reverserot_a and reverserot_b at the same time.
*/

static void	revrotate(t_stack *src)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = src->nbr[i];
	while (i < src->total)
	{
		src->nbr[i] = src->nbr[i + 1];
		i++;
	}
	src->nbr[src->total] = tmp;
}

void	revrotate_a(t_ps *src)
{
	if (src->a->total >= 2)
	{
		revrotate(&src->a);
		ft_putendl_fd("rra", 1);
	}
}

void	revrotate_b(t_ps *src)
{
	if (src->b->total >= 2)
	{
		revrotate(&src->b);
		ft_putendl_fd("rrb", 1);
	}
}

void	revrotate_both(t_ps *src)
{
	if (src->a->total >= 2)
		revrotate(&src->a);
	if (src->b->total >= 2)
		revrotate(&src->b);
	ft_putendl_fd("rrr", 1);
}
