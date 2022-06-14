# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana <ana@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 14:47:57 by anarodri          #+#    #+#              #
#    Updated: 2022/06/14 14:44:38 by ana              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS 	= $(addprefix src/, find_values.c input_check.c input_parse.c \
			push_swap.c tools.c)
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