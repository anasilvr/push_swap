/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:15:48 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/05 18:54:00 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Locates the first occurrence of c (converted to a char) in the string.
The terminating null character is considered to be part of the string.
Return: pointer to the first occurrence of the character c in the string str,
or NULL if the character is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*chr;

	chr = (char *)str;
	while (*chr != (unsigned char)c)
	{
		if (*chr == '\0')
			return (NULL);
		chr++;
	}
	return (chr);
}
