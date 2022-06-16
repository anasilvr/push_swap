/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:32:49 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/05 16:15:35 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence of the null-terminated substr in the
** str, where not more than n characters are searched.
** Characters that appear after a `\0'	character are not searched.
** Return: Pointer to the first char of first occurence of substr.
**			If substr is an empty string, str is returned.
**			If substr isn't present, NULL is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (substr[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == substr[j] && i + j < n)
		{
			if (substr[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
