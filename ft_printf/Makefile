NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
CFILES = 	ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_printf.c \
			ft_put_un_nbr.c \
			ft_hexa.c \
			ft_hexa_adr.c \



OBJ = $(CFILES:.c=.o)
LIBC = ar -rc
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJ}
		${LIBC} ${NAME} ${OBJ}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: clean fclean all
