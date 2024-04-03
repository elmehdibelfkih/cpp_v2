# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 18:34:54 by ebelfkih          #+#    #+#              #
#    Updated: 2024/04/03 18:35:19 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=RPN
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=RPN.cpp main.cpp
HDRS=RPN.hpp
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