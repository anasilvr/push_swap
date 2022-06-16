/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:57:32 by anarodri          #+#    #+#             */
/*   Updated: 2021/12/13 16:40:20 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Scans n bytes of the memory pointed to by str for the first instance of c.
** Both are interpreted as unsigned char.
** Return: Pointer to the first occurrence in the block of memory pointed by str.
** If the value is not found, the function returns a null pointer.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (temp[i] == (unsigned char) c)
			return (temp + i);
		i++;
	}
	return (NULL);
}
