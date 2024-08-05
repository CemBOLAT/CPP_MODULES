Name := PmergeMe
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
SRCS :=	main.cpp \
		PmergeMe.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	$(CC) $(CFLAGS) -o $(Name) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
