NAME	= animalabstract

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Makefile AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
		$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)	
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

