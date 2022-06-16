/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:27:58 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/28 16:51:25 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Upper case to lower case letter conversion.
Return: If the argument is an upper-case letter,
the function returns the corresponding lower-case letter.
Otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}
