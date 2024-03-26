# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 00:44:50 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/25 00:50:03 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Serializer
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = Serializer.cpp main.cpp
HDRS = Serializer.hpp
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