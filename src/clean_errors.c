/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:57:03 by ana               #+#    #+#             */
/*   Updated: 2022/06/17 16:28:53 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
}

void	error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

int	clean_n_return(char **table, int return_value)
{
	free_table(table);
	return (return_value);
}

void	clean_n_exit(t_ps *piles)
{
	free(piles->a.nbr);
	free(piles->b.nbr);
	free(piles->c.nbr);
	exit (0);
}
