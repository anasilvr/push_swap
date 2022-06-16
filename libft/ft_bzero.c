/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:34:55 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/22 11:36:58 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.
Return: Nothing.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n > 0)
		ft_memset(str, 0, n);
}
