SRCS = main.cpp
SRCSM = main2.cpp
SRDIR = src/
NAME = ex02
DSRC = $(addprefix $(SRDIR), $(SRCS))
DSRCM = $(addprefix $(SRDIR), $(SRCSM))
ALLC = $(DSRC)
OBJS = $(DSRC:.cpp=.o)
OBJSM = $(DSRCM:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Iinc -std=c++98
RM = rm -rf

all: $(NAME)

#$(OBJS) : $(ALLC)
#	$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

mandatory:
	$(CC) $(CPPFLAGS) -o $(NAME) $(DSRCM)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
