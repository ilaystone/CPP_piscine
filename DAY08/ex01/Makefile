# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 11:47:04 by ikhadem           #+#    #+#              #
#    Updated: 2021/11/13 05:47:23 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[38;5;118m
OKCYAN		=	\033[96m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(OKCYAN)$(NAME)$(RESET)]

NAME 		=	Span
CXX 		=	clang++
FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Span.cpp \

HDR			=	Span.cpp \

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