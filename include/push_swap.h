/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/19 16:11:05 by anarodri         ###   ########.fr       */
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

/* input_check.c */
int		input_check(int argc, char **argv);
int		is_strargv_valid(char **argv);
int		is_int_valid(char *str);

/* input_parse.c */
void	input_parse(int argc, char **argv, t_pushswap *piles);
void	init_stacks(t_pushswap *piles, int count);
void	fill_stack(char **numbers, int count, t_stack *pile, int option);

/* tools.c */
// void	strargv_to_intarray(char **table, t_stack *data, int count);

int		elements_count(char **table);
void	free_table(char **table);
void	error(void);

/* Operations */
void	swap_a(t_pushswap *src);
void	swap_b(t_pushswap *src);
void	swap_both(t_pushswap *src);
void	push_a(t_pushswap *src);
void	push_b(t_pushswap *src);
void	rotate_a(t_pushswap *src);
void	rotate_b(t_pushswap *src);
void	rotate_both(t_pushswap *src);
void	revrotate_a(t_pushswap *src);
void	revrotate_b(t_pushswap *src);
void	revrotate_both(t_pushswap *src);


#endif
