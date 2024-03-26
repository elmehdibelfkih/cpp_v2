# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 05:51:23 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 08:00:04 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=iter
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=main.cpp
HDRS=iter.hpp
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
