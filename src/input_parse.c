/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:31 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 13:18:51 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	input_parse(int argc, char **argv, t_pushswap *piles)
{
	char	**tmp;
	int		count;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		count = elements_count(tmp);
		init_stacks(piles, count);
		fill_stack(tmp, count, &piles->a, 1);
		free_table(tmp);
	}
	else
	{
		count = argc - 1;
		init_stacks(piles, count);
		fill_stack(argv, count, &piles->a, 2);
	}
}

void	init_stacks(t_pushswap *piles, int count)
{
	piles->a.nbrs = malloc(sizeof(int) * count);
	piles->b.nbrs = malloc(sizeof(int) * count);
	piles->c.nbrs = malloc(sizeof(int) * count);
}

void	fill_stack(char **numbers, int count, t_stack *pile, int option)
{
	int	i;
	int	j;

	if (option == 1)
	{
		i = 0;
		while (numbers[i++])
		{
			pile->nbrs[count] = ft_atol(numbers[i]);
			pile->total++;
			count--;
		}
	}
	if (option == 2)
	{
		j = 1;
		while (numbers[j++])
		{
			pile->nbrs[count] = ft_atol(numbers[j]);
			pile->total++;
			count--;
		}
	}
}

int	elemens_count(char **table)
{
	int	i;

	i = 0;
	while (table[i])
		i++;
	return (i);
}
