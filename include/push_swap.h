/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 13:07:06 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* STRUCTS */
typedef struct s_stack
{
	int	*nbrs;
	int	total;
}		t_stack;

typedef struct s_pushswap
{
	t_stack	a;
	t_stack	b;
	t_stack	c;
}		t_pushswap;

/* PROTOTYPES */

/* push_swap.c */
void	input_parse(int argc, char **argv, t_pushswap *piles);
void	init_stacks(t_pushswap *piles, int count);
/* to add: is_sorted, small_sort, big_sort, radix */

/* validate.c */
int		input_check(int argc, char **argv);
int		is_strargv_valid(char **argv);
int		is_int_valid(char *str);
void	free_table(char **table);

/* input_parse.c */
int		elements_count(char **table);
void	strargv_to_intarray(char **table, t_stack *data, int count);
void	fill_stack(char **numbers, int count, t_stack *pile, int option);

void	error(void);

/* Push_swap Commands */

#endif
