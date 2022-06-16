/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:16 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/16 18:08:54 by anarodri         ###   ########.fr       */
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
	printf("BEFORE\n");
	print_all_stack(&piles);
	printf("___________________\n");
	if (is_ordered(&piles.a))
		return (0);
	printf("\n[Sorting begins...]\n");
	if (piles.a.total < 6)
		small_sort(&piles);
	else
		radix_sort(&piles);
	printf("[End of Sorting]\n");
	printf("___________________\n");
	printf("\nAFTER\n");
	print_all_stack(&piles);
	clean_n_exit(&piles);
}
