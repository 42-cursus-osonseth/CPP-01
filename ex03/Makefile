CC				= c++

CFLAGS 			= -Wall -Wextra -Werror -std=c++98

INCLUDEPATH		= ./

SRCPATH 		= ./

OBJDIR 			= ./

DEPDIR 			= ./

SRCNAME			= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

SRCS = $(addprefix $(SRCPATH), $(SRCNAME))

OBJS = $(patsubst $(SRCPATH)%.cpp, $(OBJDIR)%.o, $(SRCS))

DEPS = $(patsubst $(OBJDIR)%.o, $(DEPDIR)%.d, $(OBJS))

NAME = a.out

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re