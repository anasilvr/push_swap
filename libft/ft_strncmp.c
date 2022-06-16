/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:01:44 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/05 13:31:18 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares (lexicographically) up to n characters of str1 to those of str2.
** Characters following the null character are not compared.
** Return:
**		Negative value if str1 is less than str2;
**		Zero if they're equal;
**		Positive value if str1 is greater than str2.
*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < (n - 1)
		&& (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
