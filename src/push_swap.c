/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:16 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:49:20 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	piles;
	int		size;
	int		to_free;

	to_free = false;
	ft_bzero(&piles, sizeof(t_ps));
	if (argc < 2)
		exit (0);
	argv++;
	if (argc == 2)
		argv = split_argv(argv[0], &to_free);
	size = stack_size(argc, argv);
	if (!input_check(argv) || !init_stacks(&piles, size))
		error();
	input_parse(size, argv, &piles);

	printf("\n_____Stack A_____\n");
	print_array(piles.a);
	printf("\n_____Stack B_____\n");
	print_array(piles.b);
	printf("\n_____Stack C_____\n");
	print_array(piles.c);
//	print_array(piles.b.nbr);
/*	else
		big_sort(&piles);
	free(&piles);*/
}
