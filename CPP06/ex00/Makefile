NAME	= convert

CC		= c++ 
CFLAGS	= -Wextra -Wall -Werror -std=c++98
RM		= rm -f 

SRCS	= main.cpp ScalarConverter.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp Makefile ScalarConverter.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
