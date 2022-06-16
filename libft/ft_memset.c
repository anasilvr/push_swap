/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:27 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/22 10:41:14 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fill a block of memory with a particular value.
str: Pointer to the block of memory to fill.
c: Value to be set (passed as an int, converted into an unsigned char).
n: number of bytes to be filled.
Return: a pointer to the memory area str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = str;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (tmp);
}
