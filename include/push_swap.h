/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/17 16:28:23 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* STRUCTS */
typedef struct s_stack
{
	int	*nbr;
	int	total;
}		t_stack;

typedef struct s_ps
{
	t_stack	a;
	t_stack	b;
	t_stack	c;
}		t_ps;

/* PROTOTYPES */

/* input_check.c */
int		valid_strargv(char **argv);
int		valid_int(char *nb);
int		is_ordered(t_stack *src);

/* input_parse.c */
int		input_parse(int size, char **av);
void	init_stacks(int argc, char **argv, t_ps *piles);
int		stack_size(char **tmp);
void	fill_array(int size, char **args, t_stack *a);

/* tools.c */
void	copy_stack(t_stack *src, t_stack *dst);
void	sort_stack(t_stack *src);
void	set_index(t_ps *s);

/* clean_errors.c */
void	free_table(char **table);
void	error(void);
int		clean_n_return(char **table, int return_value);
void	clean_n_exit(t_ps *piles);

/* find_values.c */
int		find_largest(t_stack *src);
int		top(t_stack *s);
int		bot(t_stack *s);
int		find_maxb(int max);

/* *_sort.c */
void	small_sort(t_ps *to_sort);
void	sort_3(t_stack *a);
void	sort_le_5(t_stack *a, t_stack *b);
void	radix_sort(t_ps *s);

/* Operations */
void	swap_a(t_stack *src);
void	swap_b(t_stack *src);
void	swap_both(t_ps *src);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_a(t_stack *src);
void	rotate_b(t_stack *src);
void	rotate_both(t_ps *piles);
void	revrotate_a(t_stack *src);
void	revrotate_b(t_stack *src);
void	revrotate_both(t_ps *src);

#endif
