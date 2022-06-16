/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:15:13 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/05 18:55:21 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locate last occurrence of character in string.
** The terminating null-character is considered part of the string.
** Return: Pointer to the last occurence of a character (c) in str.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	if (c == '\0')
		return ((char *)str + i);
	while (i-- != 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
	}
	return (0);
}
