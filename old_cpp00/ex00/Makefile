SRCS = megaphone.cpp
SRDIR = src/
NAME = megaphone
DSRC = $(addprefix $(SRDIR), $(SRCS))
ALLC = $(DSRC)
OBJS = $(DSRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -Iinc
RM = rm -rf

all: $(NAME)

$(OBJS) : $(ALLC)
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
