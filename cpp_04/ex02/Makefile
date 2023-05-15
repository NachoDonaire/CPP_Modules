SRCS = Animal.cpp main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
SRDIR = src/
NAME = Animal
DSRC = $(addprefix $(SRDIR), $(SRCS))
ALLC = $(DSRC)
OBJS = $(DSRC:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Iinc -std=c++98
RM = rm -rf

all: $(NAME)

##$(OBJS) : $(ALLC)
##	$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
