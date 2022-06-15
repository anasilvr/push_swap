/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:37 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 13:52:06 by anarodri         ###   ########.fr       */
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

int	find_maxb(int count)
{
	int	i;
	int	maxb;

	i = count;
	maxb = 0;
	while (i >> maxb)
		++maxb;
	return (maxb);
}

int	find_n(t_stack *src)
{
	int	i;

	i = 0;
	while (src->nbr[i] == 0)
		i++;
	return (src->nbr[i]);
}
