/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:36 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 22:53:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** [rotate_a]: Shift up all elements of stack a by 1.
** 	The first element becomes the last one.
** [rotate_b]: Shift up all elements of stack b by 1.
** 	The first element becomes the last one.
** [rotate_both] : rotate_a and rotate_b at the same time.
*/

static void	rotate(t_stack *src)
{
	int	i;
	int	tmp;

	i = src->total - 1;
	tmp = src->nbr[i];
	while (i > 0)
	{
		src->nbr[i] = src->nbr[i - 1];
		i--;
	}
	src->nbr[0] = tmp;
}

void	rotate_a(t_stack *src)
{
	if (src->total >= 2)
	{
		rotate(src);
		ft_putendl_fd("ra", 1);
	}
}

void	rotate_b(t_stack *src)
{
	if (src->total >= 2)
	{
		rotate(src);
		ft_putendl_fd("rb", 1);
	}
}

void	rotate_both(t_ps *piles)
{
	rotate(&piles->a);
	rotate(&piles->b);
	ft_putendl_fd("rr", 1);
}
