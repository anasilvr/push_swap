/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:08:16 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 16:06:33 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_pushswap	piles;

	ft_bzero(&piles, sizeof(t_pushswap));
	if (argc < 2)
		return (0);
	if (input_check(argc, argv) == 0)
		error();
	input_parse(argc, argv, &piles);
/*	if (is_sorted(&piles.a))
		return (0);
	if (piles.a.total < 10)
		small_sort(&piles);
	else
		big_sort(&piles);
	free(&piles);
*/
}