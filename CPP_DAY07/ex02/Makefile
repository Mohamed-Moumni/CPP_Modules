# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 00:09:45 by mmoumni           #+#    #+#              #
#    Updated: 2022/11/24 14:30:08 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98 

SRC = main.cpp

HEADER = Array.hpp

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