/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:12:06 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:04:46 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alphabetic character test.
Tests for any character for which ft_isupper or ft_islower is true.
The value of the argument must be representable as:
an unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
