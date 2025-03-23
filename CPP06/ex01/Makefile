NAME	= serializer

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp Serializer.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

%.o: %.cpp Serializer.hpp Makefile
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

flcean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
