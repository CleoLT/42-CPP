NAME	= harl

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM		= rm -f

SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp Makefile Harl.hpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
