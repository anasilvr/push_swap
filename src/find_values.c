/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:37 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/16 18:04:56 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_largest(t_stack *src)
{
	int	i;
	int	largest;

	i = 0;
	largest = src->nbr[0];
	while (i < src->total)
	{
		if (src->nbr[i] > largest)
			largest = src->nbr[i];
		i++;
	}
	return (largest);
}

int	top(t_stack *s)
{
	return (s->nbr[s->total - 1]);
}

int	bot(t_stack *s)
{
	return (s->nbr[0]);
}

int	find_maxb(int max)
{
	int	i;
	int	maxb;

	i = max;
	maxb = 0;
	while (i >> maxb != 0)
		++maxb;
	return (maxb);
}
