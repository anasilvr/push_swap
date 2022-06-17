/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:16 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/17 16:49:59 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	piles;

	ft_bzero(&piles, sizeof(t_ps));
	if (argc < 2)
		exit (0);
	if (!input_parse(argc, argv))
		error();
	init_stacks(argc, argv, &piles);
	if (is_ordered(&piles.a))
		clean_n_exit(&piles);
	if (piles.a.total < 6)
		small_sort(&piles);
	else
		radix_sort(&piles);
	clean_n_exit(&piles);
}
