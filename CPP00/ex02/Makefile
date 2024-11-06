NAME	= bankapp

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -f

SRCS	= tests.cpp Account.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Makefile Account.hpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
