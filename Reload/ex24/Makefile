NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)

# creacion de la librería a partir de los objetos

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# compilacion de los objetos a partir de los .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
