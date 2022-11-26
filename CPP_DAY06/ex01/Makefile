# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 22:59:44 by mmoumni           #+#    #+#              #
#    Updated: 2022/11/20 23:14:27 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

CPP = c++

FLAGS = -Wall -Wextra -Werror -static-libsan

STD_COMP = -std=c++98

SRC = Serialization.cpp main.cpp

HEADER = Serialization.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CPP) $(FLAGS) $(STD_COMP) -o $(NAME) $(OBJ)

%.o:%.cpp $(HEADER)
	$(CPP) $(FLAGS) $(STD_COMP) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean  all
