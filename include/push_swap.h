/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:47:46 by anarodri          #+#    #+#             */
/*   Updated: 2022/02/28 14:02:05 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"



/* STRUCTS */
typedef struct stackbox_t /* stacks' contents and their indexes */
{
	int *elements;
	int count;
} sbox_t;

typedef struct stacks_t
{
	struct sbox_t *stack_a;
	struct sbox_t *stack_b;
	struct sbox_t *stack_c; /* substack created to process input and guide sorting */
} stack_t;

/* PROTOTYPES */

/* main.c */
int main (int argc, char **argv);
// int is_sorted();
// void 	check_dup();
void	error(void);
stack_t *initialize stacks(void);


void	sort_array(int *array, int n);
float	find_median(int *array, int n);


#endif
