/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:41:47 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 14:30:02 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting "s" using the character "c" as a delimiter.
** Return: The array of new strings resulting from the split,
** NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_strcount(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && (str[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)malloc(sizeof(char) * n + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
			array[k++] = ft_strndup(s + j, i - j);
	}
	array[k] = NULL;
	return (array);
}
