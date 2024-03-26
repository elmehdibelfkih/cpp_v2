# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 08:32:23 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 12:52:39 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Array
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=main.cpp
HDRS=Array.hpp
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