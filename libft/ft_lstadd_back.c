/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:37:52 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/19 16:50:11 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the element ’new’ at the end of the list.
** **lst: adress of a pointer to the first link of a list.
** *new: adress of a pointer to the element to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
