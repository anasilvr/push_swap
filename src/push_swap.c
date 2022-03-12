/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:42 by anarodri          #+#    #+#             */
/*   Updated: 2022/02/25 12:09:31 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



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