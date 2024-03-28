# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 10:37:52 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/27 10:38:31 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Span
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=main.cpp Span.cpp
HDRS=Span.hpp
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