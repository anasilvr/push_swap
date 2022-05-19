/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:45:27 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 16:03:20 by anarodri         ###   ########.fr       */
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
	tmp = src->nbrs[i];
	while (i < src->total)
	{
		src->nbrs[i] = src->nbrs[i + 1];
		i++;
	}
	src->nbrs[src->total] = tmp;
}

void	revrotate_a(t_pushswap *src)
{
	if (src->a.total >= 2)
	{
		revrotate(&src->a);
		ft_putendl_fd("rra", 1);
	}
}

void	revrotate_b(t_pushswap *src)
{
	if (src->b.total >= 2)
	{
		revrotate(&src->b);
		ft_putendl_fd("rrb", 1);
	}
}

void	revrotate_both(t_pushswap *src)
{
	if (src->a.total >= 2)
		revrotate(&src->a);
	if (src->b.total >= 2)
		revrotate(&src->b);
	ft_putendl_fd("rrr", 1);
}
