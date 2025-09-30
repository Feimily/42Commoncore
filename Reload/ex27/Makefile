NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/

SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)

# creacion de la librería a partir de los objetos

all: $(NAME)
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
