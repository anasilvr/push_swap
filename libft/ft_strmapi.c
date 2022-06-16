/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:28:21 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/18 14:55:59 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string ’s’,
** passing its index as first argument to create a new string
** (with malloc(3)) resulting from successive applications of ’f’.,
** Return: The string created from the successive applications of ’f’.
** NULL if allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*temp;

	if (s == NULL)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
