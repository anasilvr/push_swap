/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:48:13 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:37:03 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Size-bounded string copying.
Takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0).
A byte for the NUL should be included in size and src must be NUL-terminated.
Return: total length of the string they tried to create (length of src).
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
