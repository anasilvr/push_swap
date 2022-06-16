/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:52:04 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/12 10:35:59 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of s1, with the characters
** specified in ’set’ removed from the beginning and the end of the string.
** s1: string to be trimmed.
** set: reference set of characters to trim.
** Return: The trimmed string, NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	slen;
	char	*temp;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1) != 0)
		s1++;
	slen = ft_strlen(s1);
	while (slen != 0 && ft_strchr(set, s1[slen]) != 0)
		slen--;
	temp = ft_substr(s1, 0, slen + 1);
	return (temp);
}
