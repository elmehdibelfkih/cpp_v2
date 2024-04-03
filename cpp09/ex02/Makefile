# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 22:01:26 by ebelfkih          #+#    #+#              #
#    Updated: 2024/04/03 22:01:52 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PmergeMe
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=PmergeMe.cpp main.cpp
HDRS=PmergeMe.hpp
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