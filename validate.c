/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:11:30 by anarodri          #+#    #+#             */
/*   Updated: 2022/02/28 13:17:40 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Step 1: Receive and validate input (parse and check)
** (If ARG == char* -> ft_split -> ft_atol)
**	 #Is it more than one (argc > 2)
**	 #Is it all ints? (ft_isint)
**	 #Is there any duplicates?
** When false: stops and prints "Error\n"
**
** Step 2: Populate stack a and c.
**
** Step 3: Sort stack c.
**
** Step 4: Compare indexes between a and c to guide swaps.
**
** swap_2, swap_3, swap_5...
** smallsort if count < 100;
** bigsort if count > 100;
**
** !0 = true
**
*/

#include "../include/push_swap.h"

int	isint()
{}

int dup_check()
{}

void error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
int