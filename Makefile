# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 14:47:57 by anarodri          #+#    #+#              #
#    Updated: 2022/05/24 10:36:03 by anarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT		= ft
LIBFTDIR	= libft
MAKELIBFT	= @$(MAKE) -C $(LIBFTDIR)

SRC			= src
INC			= include
OBJ			= obj

CFILES	=	main.c input_check.c input_parse.c tools.c push_ops.c revrotate_ops.c rotate_ops.c swap_ops.c
HFILES	=	push_swap.h

OFILES		= $(CFILES:.c=.o)
SRCS		= $(addprefix $(SRC)/, $(CFILES))
OBJS		= $(addprefix $(OBJ)/, $(OFILES))
HEADERS		= $(addprefix $(INC)/, $(HFILES))

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf

$(OBJ)/%.o:	$(SRC)/%.c
			$(CC) $(CFLAGS) -I$(LIBFTDIR) -I$(INC) -I. -c $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(MAKELIBFT)
			$(CC) $(OBJS) -L$(LIBFTDIR) -l$(LIBFT) -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

all:		$(NAME)

clean:
			$(MAKELIBFT) fclean
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

norme:
			$(MAKELIBFT) norme
			norminette $(SRCS) $(HEADERS)

.PHONY: all clean fclean re norme