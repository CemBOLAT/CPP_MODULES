NAME=harlFilter
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES=main.cpp Harl.cpp
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
