NAME=ex03
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
FILES=	main.cpp \
		AMateria.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		Materia.cpp \

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
