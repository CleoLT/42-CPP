NAME	= harl

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp Makefile Harl.hpp
		$(CC) $(CFLAGS) -o $< -c $@

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
