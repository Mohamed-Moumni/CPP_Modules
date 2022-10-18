NAME = AwesomePhoneBook

CPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98

SRC = 

HEADER = 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(SRC)
	$(CPP) $(FLAGS) $(STD_COMP) -o $(NAME) $(OBJ)

%.o:%.c $(HEADER)
	$(CPP) $(FLAGS) $(STD_COMP) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean  all
