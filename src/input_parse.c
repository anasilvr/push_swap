/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:31 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:52:52 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	input_parse(int size, char **av, t_ps *piles)
{
	int	i;

	i = 0;
	while(i <= size)
	{
		piles->a->nbr[i] = ft_atoi(av[i]);
		piles->a->total++;
		i++;
	}
	i = 0;
	while (i <= size)
	{
		piles->c->nbr[i] = piles->a->nbr[i];
		piles->c->total++;
		i++;
	}
	if (piles->a->total > 3)
		start_indexation(piles->a, piles->c);

}

int	init_stacks(t_ps *piles, int size)
{
	piles->a = stack_alloc(size);
	piles->b = stack_alloc(size);
	piles->c = stack_alloc(size);
	if (!piles->a || !piles->b || !piles->c)
		return(false);
	return (true);
}

t_stack	*stack_alloc(int size)
{
	t_stack *src;

	src = ft_calloc(1, sizeof(t_stack));
	if (!src)
		return (NULL);
	src->nbr = ft_calloc(size, sizeof(int));
	if (!src->nbr)
		return(free_struct(src));
	src->total = 0;
	return(src);
}

