CC				= c++

CFLAGS 			= -Wall -Wextra -Werror -std=c++98

INCLUDEPATH		= ./

SRCPATH 		= ./

OBJDIR 			= ./

DEPDIR 			= ./

SRCNAME			= main.cpp Zombie.cpp zombieHorde.cpp

SRCS = $(addprefix $(SRCPATH), $(SRCNAME))

OBJS = $(patsubst $(SRCPATH)%.cpp, $(OBJDIR)%.o, $(SRCS))

DEPS = $(patsubst $(OBJDIR)%.o, $(DEPDIR)%.d, $(OBJS))

NAME = horde

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

-include $(DEPS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re