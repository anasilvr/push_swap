/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:31 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 22:37:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	input_parse(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	j = 2;
	if (argc == 2 && !valid_strargv(argv))
		return (0);
	if (argc > 2)
	{
		while (argv[i])
		{
			if (!valid_int(argv[i]))
				return (0);
			while (argv[j])
			{
				if (ft_atol(argv[i]) == ft_atol(argv[j]))
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
	}
	return (1);
}

void	init_stacks(int argc, char **argv, t_ps *piles)
{
	char	**tmp;
	int		size;

	argv++;
	if (argc == 2)
	{
		tmp = ft_split(argv[0], ' ');
		size = stack_size(tmp);
		piles->a.nbr = malloc(sizeof(int) * size);
		piles->b.nbr = malloc(sizeof(int) * size);
		piles->c.nbr = malloc(sizeof(int) * size);
		fill_array(size, tmp, &piles->a);
		free_table(tmp);
	}
	else
	{
		piles->a.nbr = malloc(sizeof(int) * (argc - 1));
		piles->b.nbr = malloc(sizeof(int) * (argc - 1));
		piles->c.nbr = malloc(sizeof(int) * (argc - 1));
		fill_array((argc - 1), argv, &piles->a);
	}
	copy_stack(&piles->a, &piles->c);
	sort_stack(&piles->c);
	set_index(piles);
}

int	stack_size(char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
		i++;
	return (i);
}

void	fill_array(int size, char **args, t_stack *a)
{
	int	i;
	int	j;

	i = size - 1;
	j = 0;
	while (args[j])
	{
		a->nbr[i] = ft_atol(args[j]);
		a->total++;
		i--;
		j++;
	}
}