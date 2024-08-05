Name := ex01
Files :=	main.cpp \
			Span.cpp
Flags := -Wall -Wextra -Werror -std=c++98
GXX := c++

OBJ := $(Files:.cpp=.o)


all: $(Name)

$(Name): $(OBJ)
	$(GXX) $(Flags) $(Files) -o $(Name)

%.o: %.cpp
	$(GXX) $(Flags) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
