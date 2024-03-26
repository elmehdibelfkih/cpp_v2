# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 03:38:44 by ebelfkih          #+#    #+#              #
#    Updated: 2024/03/26 03:41:33 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = A.cpp B.cpp C.cpp functions.cpp Base.cpp main.cpp
HDRS = A.hpp B.hpp C.hpp functions.h Base.hpp
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