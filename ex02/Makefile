CC				= c++

CFLAGS 			= -Wall -Wextra -Werror -std=c++98

INCLUDEPATH		= ./

SRCPATH 		= ./

OBJDIR 			= ./obj/

DEPDIR 			= ./dep/

SRCNAME			= main.cpp

SRCS = $(addprefix $(SRCPATH), $(SRCNAME))

OBJS = $(patsubst $(SRCPATH)%.cpp, $(OBJDIR)%.o, $(SRCS))

DEPS = $(patsubst $(OBJDIR)%.o, $(DEPDIR)%.d, $(OBJS))

NAME = a.out

all: $(OBJDIR) $(DEPDIR) $(NAME)

$(OBJDIR) $(DEPDIR):
	@mkdir -p $(OBJDIR) $(DEPDIR)

$(OBJDIR)%.o: $(SRCPATH)%.cpp
	@$(CC) $(CFLAGS) -I$(INCLUDEPATH) -MMD -MP -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@mv obj/*.d dep/

-include $(DEPS)

clean:
	rm -rf obj dep

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re