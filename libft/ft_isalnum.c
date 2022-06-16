/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:31:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 13:24:03 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alphanumeric character test.
Tests for any character for which ft_isalpha or ft_isdigit is true.
The value of the argument must be representable as:
an unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
