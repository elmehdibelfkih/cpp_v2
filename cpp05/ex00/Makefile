# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 17:47:10 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/15 17:48:54 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC =	Bureaucrat.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all