NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC  = 	ft_printf.c \
		ft_printf_utils.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re.