NAME	= RPN

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM		= rm -f

SRCS	= main.cpp RPN.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile RPN.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:	
		$(RM) $(OBJS) 
		
fclean:	clean
		$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

