NAME	= PmergeMe

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM		= rm -f

SRCS	= main.cpp PmergeMe.cpp utils.cpp
OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp Makefile PmergeMe.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:	
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	clean fclean all
