# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 08:05:09 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 07:26:30 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=cast
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=ScalarConverter.cpp main.cpp
HDRS=ScalarConverter.hpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDRS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

exe: all clean

re: fclean all