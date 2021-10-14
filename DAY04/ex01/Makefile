# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 16:05:06 by ikhadem           #+#    #+#              #
#    Updated: 2021/10/13 16:33:40 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[38;5;118m
OKCYAN		=	\033[96m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(OKCYAN)$(NAME)$(RESET)]

NAME 		=	Brainless
CXX 		=	clang++
FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp \

HDR			=	Animal.hpp \
				Dog.hpp \
				Cat.hpp \
				Brain.hpp \

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