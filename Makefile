# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 14:47:57 by anarodri          #+#    #+#              #
#    Updated: 2022/02/28 13:11:57 by anarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target : prerequisite
#			Instructions: How to create the target using prerequisites

#COLOR OPTIONS
NC		=	\033[0m       # Text Reset
RED		=	\033[0;31m    # Red
GREEN	=	\033[0;32m    # Green
YELLOW	=	\033[0;33m    # Yellow
NC		=	\033[0m       # Text Reset


COMP	=	gcc -Wall -Wextra -Werror -g
RM		=	rm -f

#PUSH_SWAP
NAME	=	push_swap

SRC		=	$(addprefix src/, arrayutils.c push_swap.c statsutils.c test.c validate.c)
OBJ		=	$(SRC:.c=.o)

HEADER	=	-Iinclude/ -Ilibft

.c.o:
			@$(COMP) $(HEADER) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(MAKE) re -C ./libft
			@echo "\n$(GREEN)Libft done!$(NC)\n"
			$(COMP) $(OBJ) -L libft -l ft -o $(NAME)
			@echo "\n$(GREEN)Push_Swap Compiled!"

clean:
			$(RM) $(OBJ)
			$(MAKE) clean -C ./libft

fclean:		clean
			$(RM) $(NAME)
			@echo "\n$(GREEN)Tidying up done!$(NC)"

re:			fclean all

.PHONY:		all libft clean fclean re mehappy
