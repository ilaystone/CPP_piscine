# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 11:25:44 by ikhadem           #+#    #+#              #
#    Updated: 2021/11/07 14:34:49 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[38;5;118m
OKCYAN		=	\033[96m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(OKCYAN)$(NAME)$(RESET)]

NAME 		=	IterTemplate
CXX 		=	clang++
FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \

HDR			=	iter.template.hpp\

OBJ			=	$(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	@$(CXX) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(FLAG) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(_INFO) is ready!.\n"

clean :
	@rm -f $(OBJ)
	@printf "$(_SUCCESS) $(_INFO) objects removed!.\n"

fclean :
	@rm -f $(NAME) $(OBJ)
	@printf "$(_SUCCESS) $(_INFO) removed!.\n"

re : fclean all

.PHONY : all clean fclean re