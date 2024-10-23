NAME	= megaphone

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC		= megaphone.cpp

RM		= rm -rf

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) megaphone.o

fclean:	clean
		$(RM) $(NAME)

re:		clean fclean all

.PHONY: all clean fclean re 		
