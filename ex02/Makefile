NAME = Account
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++ -std=c++98 -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp Account.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean