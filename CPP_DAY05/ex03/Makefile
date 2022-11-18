NAME = Form2

CPP = c++

FLAGS = -Wall -Wextra -Werror

STD_COMP = -std=c++98

SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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
