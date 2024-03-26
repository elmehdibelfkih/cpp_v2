# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 03:38:44 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 05:07:56 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp 
HDRS = whatever.hpp
OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDRS)
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

makeclean: all clean

re: fclean all