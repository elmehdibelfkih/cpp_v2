# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 23:18:30 by ebelfkih          #+#    #+#              #
#    Updated: 2024/04/02 23:20:43 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=btc
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=BitcoinExchange.cpp main.cpp
HDRS=BitcoinExchange.hpp
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