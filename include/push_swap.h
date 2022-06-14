/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/06/14 15:59:02 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef enum bool
{
	false,
	true
}	t_bool;

/* STRUCTS */
typedef struct s_stack
{
	int	*nbr;
	int	total;
}		t_stack;

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;
}		t_ps;

/* PROTOTYPES */

/* input_check.c */
int		input_check(char **av);
int		is_int_valid(char *str);
int		is_sorted(t_stack *src);

/* input_parse.c */
int		init_stacks(t_ps *piles, int size);
t_stack	*stack_alloc(int size);
void	input_parse(int size, char **av, t_ps *piles);

/* tools.c */
int		stack_size(int argc, char *argv[]);
char	**split_argv(char *av, int *to_free);
//int		define_median(t_ps *pile);
void	print_array(t_stack *stack);
void	copy_stack(t_stack *src, t_stack *dst);

/* clean_errors.c */
void	free_table(char **table);
void	error(void);

/* find_values.c */
int		find_smallest(t_ps *pile);
int		find_largest(t_ps *pile);

void	start_indexation(t_ps *a, t_ps *c);

/* *_sort.c */
void	small_sort(t_ps *to_sort);
void	sort_array_c(t_ps *pile);

/* Operations */
void	swap_a(t_ps *src);
void	swap_b(t_ps *src);
void	swap_both(t_ps *src);
void	push_a(t_ps *src);
void	push_b(t_ps *src);
void	rotate_a(t_ps *src);
void	rotate_b(t_ps *src);
void	rotate_both(t_ps *src);
void	revrotate_a(t_ps *src);
void	revrotate_b(t_ps *src);
void	revrotate_both(t_ps *src);


#endif
