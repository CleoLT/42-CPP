NAME	= animal

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Makefile Animal.hpp Dog.hpp Cat.hpp
		$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)	
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

