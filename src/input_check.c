/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:11:30 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/17 17:07:03 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	valid_strargv(char **argv)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		if (!valid_int(tmp[i]))
			return (clean_n_return(tmp, 0));
		while (tmp[j])
		{
			if (ft_atol(tmp[i]) == ft_atol(tmp[j]))
				return (clean_n_return(tmp, 0));
			j++;
		}
		i++;
		j = i + 1;
	}
	return (clean_n_return(tmp, 1));
}

int	valid_int(char *nb)
{
	int	i;

	i = 0;
	if (ft_atol(nb) < INT_MIN || ft_atol(nb) > INT_MAX)
		return (0);
	if (nb[0] == '-' && ft_isdigit(nb[1]))
		i++;
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_ordered(t_stack *src)
{
	int	i;

	i = 0;
	while (i < src->total - 1)
	{
		if (src->nbr[i + 1] > src->nbr[i])
			return (0);
		i++;
	}
	return (1);
}
