# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 08:05:09 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/03 11:45:55 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cast
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = ScalarConverter.cpp main.cpp
HDRS = ScalarConverter.hpp
OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDRS)
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

makeclean: all clean

re: fclean all