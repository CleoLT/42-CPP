NAME	= bsp

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM		= rm -rf

SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile Fixed.hpp Point.hpp
		$(CC) $(CFLAGS) -c $< -o $@


clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
