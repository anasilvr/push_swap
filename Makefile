# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 14:47:57 by anarodri          #+#    #+#              #
#    Updated: 2022/05/25 12:03:16 by anarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS 	= $(addprefix src/, find_values.c input_check.c input_parse.c push_ops.c \
			push_swap.c revrotate_ops.c rotate_ops.c small_sort.c swap_ops.c tools.c)
OBJS 	= ${SRCS:.c=.o}

HEADER	= -Iinclude/ -Ilibft

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -g

.c.o:
					@gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

all:	${NAME}

${NAME}:	${OBJS}
					@make re -C ./libft
					@$(CC) ${OBJS} -L libft -l ft -o ${NAME}
					@echo "\n\033[32m\033[1mPush_Swap Compiled!\n\033[0m"
					@sleep 0.5
					@printf "\033c"
					@echo "\n\033[32m\033[1mPush_Swap Compiled!\n\033[0m"

clean:
					@make clean -C ./libft
					rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					@make fclean -C ./libft
					@rm -f ${NAME}
					@echo "\n\033[32m\033[1mClean Done!\n\033[0m"

re:			fclean all

.PHONY: all clean fclean re