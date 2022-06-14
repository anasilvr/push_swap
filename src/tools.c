/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:10:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:57:25 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_size(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 2)
		i = argc - 1;
	else
	{
		while (argv[i])
			i++;
	}
	return (i);
}

char	**split_argv(char *av, int *to_free)
{
	char **nbrs;

	nbrs = ft_split(av, ' ');
	*to_free = true;
	return(nbrs);
}

/*int	define_median(t_ps *pile)
{
	int	median;

	sort_array_c(pile);
	if (pile->c->total % 2 == 0)
		median = (pile->c->nbr[pile->a->total / 2]
				+ pile->c->nbr[pile->a->total / 2 + 1]) / 2.0;
	else
		median = pile->c->nbr[pile->a->total / 2];
	return (median);
}*/

void	print_array(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->total)
		printf("%d\n", stack->nbr[i]);
}

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
