SRC = t_printf.c aux.c
OBJS = $(SRC:.c=.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM =  /bin/rm -f

#.SILENT:
$(NAME): $(OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re