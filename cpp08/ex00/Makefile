# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 04:56:53 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/27 09:17:16 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=easyfind
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=main.cpp
HDRS=easyfind.hpp
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