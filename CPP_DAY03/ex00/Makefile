NAME = AaaOpen

CPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98

SRC = main.cpp ClapTrap.cpp

HEADER = ClapTrap.hpp

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
