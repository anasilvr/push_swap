/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:37 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 11:35:54 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*int	find_smallest(t_ps *pile)
{
	int	i;
	int	to_check;

	i = 0;
	to_check = pile->a->nbr[i];
	while (i < pile->a->total)
	{
		if (to_check > pile->a->nbr[i])
			to_check = pile->a->nbr[i];
		i++;
	}
	return (to_check);
}*/

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
