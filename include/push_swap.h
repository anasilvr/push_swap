/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/05/18 16:39:10 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* STRUCTS */
typedef struct s_stackbox
{
	int	*nbrs;
	int	total;
}		t_stackbox;

typedef struct s_pile
{
	t_stackbox	a;
	t_stackbox	b;
	t_stackbox	c;
}		t_pile;

/* PROTOTYPES */

/* push_swap.c */
void	input_parse(int argc, char **argv, t_pile *stack);
/* to add: is_sorted, small_sort, big_sort, radix */

/* validate.c */
int		input_check(int argc, char **argv);
int		is_strargv_valid(char **argv);
int		is_int_valid(char *str);
void	free_table(char **table);

/* input_parse.c */
int		total_str_count(char **table);
void	strargv_to_intarray(char **table, t_stackbox *data, int count);
void	fill_stackbox(int argc, char **argv, t_stackbox *data);

void	error(void);

/* Push_swap Commands */

#endif
