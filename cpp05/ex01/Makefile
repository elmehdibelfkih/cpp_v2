# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 17:47:10 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/20 02:04:28 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC =	Bureaucrat.cpp  Form.cpp main.cpp
HDRS = Bureaucrat.hpp Form.hpp 
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

re: fclean all