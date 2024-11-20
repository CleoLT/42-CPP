NAME	= filereplace

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp FileReplace.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Makefile FileReplace.hpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
