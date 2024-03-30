# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 07:02:57 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/30 07:18:24 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=MutantStack
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=main.cpp
HDRS=MutantStack.hpp
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