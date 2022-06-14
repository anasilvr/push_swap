/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:37 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:53:15 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_smallest(t_ps *pile)
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
}

int	find_largest(t_ps *pile)
{
	int	i;
	int	to_check;

	i = 0;
	to_check = pile->a->nbr[i];
	while (i < pile->a->total)
	{
		if (to_check < pile->a->nbr[i])
			to_check = pile->a->nbr[i];
		i++;
	}
	return (to_check);
}

void	start_indexation(t_ps *a, t_ps *c)
{

}