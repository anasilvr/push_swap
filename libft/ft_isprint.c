/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:20:53 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:05:51 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tests for any printing character, including space (` ').
The value of the argument must be representable as:
an unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
