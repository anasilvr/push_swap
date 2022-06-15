/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:45:27 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 22:53:46 by marvin           ###   ########.fr       */
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
	int	i;
	int	tmp;

	i = 0;
	tmp = src->nbr[0];
	while (i < (src->total - 1))
	{
		src->nbr[i] = src->nbr[i + 1];
		i++;
	}
	src->nbr[src->total - 1] = tmp;
}

void	revrotate_a(t_stack *src)
{
	if (src->total >= 2)
	{
		revrotate(src);
		ft_putendl_fd("rra", 1);
	}
}

void	revrotate_b(t_stack *src)
{
	if (src->total >= 2)
	{
		revrotate(src);
		ft_putendl_fd("rrb", 1);
	}
}

void	revrotate_both(t_ps *src)
{
	revrotate(&src->a);
	revrotate(&src->b);
	ft_putendl_fd("rrr", 1);
}
