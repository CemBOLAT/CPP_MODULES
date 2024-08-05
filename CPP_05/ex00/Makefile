NAME=ex00
CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES= Bureaucrat.cpp main.cpp


OBJS = $(FILES:.cpp=.o)
all: $(NAME)

$(NAME): $(FILES) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
