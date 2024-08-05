NAME=ex03
CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES= Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS= $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(FILES) $(OBJS)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
