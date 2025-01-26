NAME	= diamondtrap

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow
RM		= rm -f

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)	
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp  Makefile ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
	
fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
