NAME=ex00
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES=Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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
