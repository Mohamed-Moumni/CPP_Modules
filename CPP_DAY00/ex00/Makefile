NAME = megaphone

GPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98

all: $(NAME)

$(NAME): megaphone.o
	$(GPP) $(FLAGS) $(STD_COMP) -o $(NAME) megaphone.o

megaphone.o:megaphone.cpp
	$(GPP) $(FLAGS) $(STD_COMP) -c megaphone.cpp

clean:
	rm -f megaphone.o

fclean:
	rm -f megaphone.o $(NAME)

re: fclean all

