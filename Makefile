# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 14:47:57 by anarodri          #+#    #+#              #
#    Updated: 2022/05/19 16:06:03 by anarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target : prerequisite
#			Instructions: How to create the target using prerequisites

NAME = push_swap

COMP	=	gcc -Wall -Wextra -Werror -g
RM		=	rm -f

SRC		=	$(addprefix src/, main.c input_check.c input_parse.c tools.c push_ops.c revrotate_ops.c rotate_ops.c swap_ops.c)
OBJ		=	$(SRC:.c=.o)

HEADER	=	-Iinclude/ -Ilibft

.c.o:
			@$(COMP) $(HEADER) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(MAKE) re -C ./libft
			$(COMP) $(OBJ) -L libft -l ft -o $(NAME)

clean:
			$(RM) $(OBJ)
			$(MAKE) clean -C ./libft

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re