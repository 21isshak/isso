SRCS = ft_printf.c \
ft_putchar.c \
ft_puthex.c \
ft_puthex_up.c \
ft_putnbr.c \
ft_putnbr_u.c \
ft_putpntr.c \
ft_putstr.c \
main.c \

OBJS = $(SRCS:.c=.o)
CC = clang
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

test: $(NAME)
	chmod +x $(NAME)
	./$(NAME)

.PHONY: all clean fclean re

