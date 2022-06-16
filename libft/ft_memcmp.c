/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:57:02 by anarodri          #+#    #+#             */
/*   Updated: 2021/12/13 16:56:42 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares the first n bytes of the block of memory pointed by str1 vs str2.
** Unlike strcmp, the function DOES NOT stop comparing after finding a null char.
** Return:
**		Negative value if str1 is less than str2;
**		Zero if they're equal;
**		Positive value if str1 is greater than str2.
*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *)str1;
	temp2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (temp1[i] == temp2[i] && i < n - 1)
		i++;
	return (temp1[i] - temp2[i]);
}
