NAME	= materia

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp
OBJS	= $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean all
