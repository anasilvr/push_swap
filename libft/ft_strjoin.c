/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:05:42 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/14 12:11:47 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new string, which is the result
** of the concatenation of ’s1’ and ’s2.
** s1: prefix string (destination)
** s2: suffix string (source)
** Return: The new string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	index_dst;
	size_t	index_src;

	index_dst = 0;
	index_src = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (temp == 0)
		return (NULL);
	while (s1[index_dst] != '\0')
	{
		temp[index_dst] = s1[index_dst];
		index_dst++;
	}
	while (s2[index_src] != '\0')
	{
		temp[index_dst] = s2[index_src];
		index_dst++;
		index_src++;
	}
	temp[index_dst] = '\0';
	return (temp);
}
