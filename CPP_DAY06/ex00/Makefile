# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 21:08:07 by mmoumni           #+#    #+#              #
#    Updated: 2022/11/21 15:14:16 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ConveScalar

CPP = c++

FLAGS = -Wall -Wextra -Werror -static-libsan

STD_COMP = -std=c++98

SRC = main.cpp ConveScalar.cpp

HEADER = ConveScalar.hpp

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
