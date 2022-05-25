/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:10:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/15 11:34:49 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	copy_stack(t_stack *src, t_stack *dst)
{
	int	i;

	i = 0;
	while (i < src->total)
	{
		dst->nbr[i] = src->nbr[i];
		dst->total++;
		i++;
	}
}

void	sort_stack(t_stack *to_sort)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < to_sort->total - 1)
	{
		if (to_sort->nbr[i] < to_sort->nbr[i + 1])
		{
			tmp = to_sort->nbr[i + 1];
			to_sort->nbr[i + 1] = to_sort->nbr[i];
			to_sort->nbr[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	set_index(t_ps *s)
{
	int	count_a;
	int	index_a;
	int	count_c;
	int	index_c;

	count_a = s->a.total;
	index_a = 0;
	while (count_a > 0)
	{
		count_c = s->c.total;
		index_c = 0;
		while (count_c > 0)
		{
			if (s->a.nbr[index_a] == s->c.nbr[index_c])
			{
				s->a.nbr[index_a] = (s->c.total - index_c - 1);
				break ;
			}
			index_c++;
			count_c--;
		}
		count_a--;
		index_a++;
	}
}

void	print_all_stack(t_ps *s)
{
	int	i;
	int	j;

	i = 0;
	j = s->c.total - 1;
	while (j >= 0)
	{
		if (s->a.total > j)
			printf("\033[1;32mA[%d] %-10d\033[1;0m ", i, s->a.nbr[j]);
		else
			printf("%16c", ' ');
		if (s->b.total > j)
			printf("\033[1;31mB[%d]%-10d \033[1;0m    ", i, s->b.nbr[j]);
		else
			printf("%19c", ' ');
		printf("\033[1;33mC[%d]%-10d\n\033[1;0m", i, s->c.nbr[j]);
		j--;
		i++;
	}
}

void	print_stack(t_stack *src)
{
	int	i;
	i = 0;

	while (src->nbr[i])
	{
		printf("[%d] = %-10d\n", i, src->nbr[i]);
		i++;
	}
}