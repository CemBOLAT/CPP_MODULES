NAME:=ex00
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES=Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ=$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(FILES) $(OBJ)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
