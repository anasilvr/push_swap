/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:38:42 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/19 15:45:58 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the element ’new’ at the beginning of the list.
** **lst: The address of a pointer to the first link of a list.
** *new: The address of a pointer to the element to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
