Name := ex02
Files := main.cpp
Headers := MutantStack.hpp \
			MutantStack.tpp
Flags := -Wall -Wextra -Werror -std=c++98 #-std=c++11
GXX := c++
Objects := $(Files:.cpp=.o)

all: $(Name)

$(Name): $(Objects) $(Headers)
	$(GXX) $(Flags) $(Files) -o $(Name)

%.o: %.cpp
	$(GXX) $(Flags) -c $< -o $@

clean:
	rm -f $(Objects)

fclean : clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
