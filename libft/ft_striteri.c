/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:40:42 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/18 14:50:08 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function f to each character of the string passed as argument,
** passing its index as first argument. Each character is passed by
** address to f to be modified if necessary.
** Return: nothing.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s != NULL && *f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &(s[i]));
			i++;
		}
	}
}
