SRCS = Bureaucrat.cpp main.cpp AForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp Intern.cpp
SRDIR = src/
NAME = tucson
DSRC = $(addprefix $(SRDIR), $(SRCS))
ALLC = $(DSRC)
OBJS = $(DSRC:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Iinc -std=c++98
RM = rm -rf

all: $(NAME)

#$(OBJS) : $(ALLC)
#	$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) *_shrubbery

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
