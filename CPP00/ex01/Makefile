NAME	= phonebook

CC		= c++

FLAGS	= -Wall -Wextra -Werror -fsanitize=address -std=c++98

RM		= rm -rf

INCLUDE	= -I${INC_DIR}

INC_DIR	= inc/
SRC_DIR	= src/
OBJ_DIR	= obj/

FILES	= main 

SRCS	= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJS	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))


all:		$(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp Makefile
			mkdir -p $(dir $@)
			$(CC) $(FLAGS) $(INCLUDE) -o $@ -c $<

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
