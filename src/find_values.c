/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:37 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/25 12:02:28 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_smallest(t_pushswap *pile)
{
	int	i;
	int	to_check;

	i = 0;
	to_check = pile->a.nbrs[i];
	while (i < pile->a.total)
	{
		if (to_check > pile->a.nbrs[i])
			to_check = pile->a.nbrs[i];
		i++;
	}
	return (to_check);
}

int	find_largest(t_pushswap *pile)
{
	int	i;
	int	to_check;

	i = 0;
	to_check = pile->a.nbrs[i];
	while (i < pile->a.total)
	{
		if (to_check < pile->a.nbrs[i])
			to_check = pile->a.nbrs[i];
		i++;
	}
	return (to_check);
}

int	first(t_stack *src)
{
	return (src->nbrs[src->total - 1]);
}

int	last(t_stack *src)
{
	return (src->nbrs[0]);
}
