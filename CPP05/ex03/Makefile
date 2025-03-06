NAME	= bureaucrat

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM		= rm -f

SRCS	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		  RobotomyRequestForm.cpp PresidencialPardonForm.cpp Intern.cpp
OBJS	= $(SRCS:.cpp=.o)
HEADS	= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
		  RobotomyRequestForm.hpp PresidencialPardonForm.hpp Intern.hpp


all:	$(NAME)

$(NAME):	$(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:	%.cpp Makefile $(HEADS)  
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
