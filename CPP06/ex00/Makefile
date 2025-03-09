NAME	= scalarconverter

CC		= c++ 
CFLAGS	= -Wextra -Wall -Werror -std=c++98
RM		= rm -f 

SRCS	= main.cpp ScalarConverter.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -c $< -o $@

$(OBJS):	Makefile ScalarConverter.hpp
		$(CC) $(CFLAGS) $(OBJS) -c $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
