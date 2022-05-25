/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:10:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/25 15:17:08 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	elements_count(char **table)
{
	int	i;

	i = 0;
	while (table[i])
		i++;
	return (i);
}

int	define_median(t_pushswap *pile)
{
	int	median;

	sort_array_c(pile);
	if (pile->c.total % 2 == 0)
		median = (pile->c.nbrs[pile->a.total / 2]
				+ pile->c.nbrs[pile->a.total / 2 + 1]) / 2.0;
	else
		median = pile->c.nbrs[pile->a.total / 2];
	return (median);
}

void	print_array(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->total)
		printf("%d\n", stack->nbrs[i]);
}

void	copy_stack(t_stack *src, t_stack *dst)
{
	int	i;

	i = 0;
	while (i < src->total)
	{
		dst->nbrs[i] = src->nbrs[i];
		dst->total++;
		i++;
	}
}

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
}

void	error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
