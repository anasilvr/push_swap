/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:54:29 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/19 16:45:10 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes as a parameter an element and frees the memory of the element’s content
** using the function ’del’ given as a parameter and free the element.
** The memory of ’next’ must not be freed.
** *lst: The element to free.
** (*del): The address of the function used to delete the content.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
