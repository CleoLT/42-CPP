NAME	= bureaucrat

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM		= rm -f

SRCS	= main.cpp Bureaucrat.cpp Form.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp Makefile Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
