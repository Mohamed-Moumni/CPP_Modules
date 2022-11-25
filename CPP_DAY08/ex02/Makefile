# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 21:07:26 by mmoumni           #+#    #+#              #
#    Updated: 2022/11/25 22:03:27 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mutated_abomination

CPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98

SRC = main.cpp 

HEADER = MutantStack.hpp

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