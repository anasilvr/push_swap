/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:00:41 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/18 16:31:26 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates sufficient memory for a copy of the string s1, does the copy,
and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).
If an error occurs, a null pointer is returned and errno may be set.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*temp;
	size_t	len;
	size_t	i;

	len = ft_strlen(str) + 1;
	temp = (char *)malloc(len * sizeof(char));
	i = 0;
	if (temp == NULL)
		return (NULL);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
