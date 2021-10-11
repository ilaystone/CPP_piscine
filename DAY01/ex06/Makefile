# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 09:12:35 by ikhadem           #+#    #+#              #
#    Updated: 2021/10/11 10:18:28 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]

NAME 		=	Karen2.0
CXX 		=	clang++
FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Karen.cpp \

HDR			=	Karen.hpp\

OBJ			=	$(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	@$(CXX) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(FLAG) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

clean :
	@rm -f $(OBJ)
	@printf "$(_SUCCESS) $(NAME)_objects removed!.\n"

fclean :
	@rm -f $(NAME) $(OBJ)
	@printf "$(_SUCCESS) $(NAME) removed!.\n"

re : fclean all

.PHONY : all clean fclean re