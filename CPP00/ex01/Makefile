NAME	= phonebook

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
DEP_FLAG= -MMD -MP
RM		= rm -rf
INCLUDE	= -I${INC_DIR}

INC_DIR	= inc/
SRC_DIR	= src/
OBJ_DIR	= obj/

FILES	= main PhoneBook Contact 

SRCS	= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJS	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))
DEPS	= $(OBJS:.o=.d)

all:		$(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp Makefile
			mkdir -p $(dir $@)
			$(CC) $(FLAGS) $(INCLUDE) $(DEP_FLAG) -o $@ -c $<

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

-include $(DEPS)

.PHONY: all clean fclean re
