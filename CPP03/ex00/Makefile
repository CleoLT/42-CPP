NAME	= clap

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp ClapTrap.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile ClapTrap.hpp
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp: $(OBJS)
		$(CC) $(CFLAGS) >@ -c <$ -o

clean:
		$(RM) $(OBJS)
	
fclean:	clean
		$(RN) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
