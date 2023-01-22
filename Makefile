NAME=libftprintf.a

CC=gcc

SRCS= ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_u.c ft_strlen.c ft_putstr.c count.c ft_puthex.c ft_putadd.c

FLAGS=-Wall -Wextra -Werror -c

OBJS= ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
