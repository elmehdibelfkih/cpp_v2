# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 02:33:54 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/20 04:58:25 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC =	Bureaucrat.cpp  AForm.cpp main.cpp
HDRS = Bureaucrat.hpp AForm.hpp 
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