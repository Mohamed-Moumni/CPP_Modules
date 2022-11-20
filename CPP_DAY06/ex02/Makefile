# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 22:59:44 by mmoumni           #+#    #+#              #
#    Updated: 2022/11/20 23:18:40 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify_Real_Type

CPP = c++

FLAGS = -Wall -Wextra -Werror -static-libsan

STD_COMP = -std=c++98

SRC = Identify_Real_Type.cpp main.cpp

HEADER = Identify_Real_Type.hpp

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
