# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 01:26:32 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 07:26:56 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Identify
CPP=c++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
SRC=A.cpp B.cpp Base.cpp C.cpp functions.cpp main.cpp
HDRS=A.hpp B.hpp Base.hpp C.hpp
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
