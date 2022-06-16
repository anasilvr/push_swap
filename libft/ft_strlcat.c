/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:51:59 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/05 18:45:18 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Appends string src to the end of dst.
It will then NUL-terminate, unless dstsize is 0 or
the original dst string was longer than dstsize
If the src and dst strings overlap, the behavior is undefined.
Return: initial length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > size)
		return (srclen + size);
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (size > dstlen)
		return (dstlen + srclen);
	return (size + srclen);
}
