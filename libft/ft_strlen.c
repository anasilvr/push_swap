/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:55:00 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/27 16:44:48 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return: number of characters that precede the terminating NUL-character.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
