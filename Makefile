CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
MY_SOURCES = ft_adres.c ft_lowerhex.c ft_putstr.c ft_putchar.c ft_printf.c ft_putnbr.c ft_putnbrunsigned.c
MY_OBJECTS = $(MY_SOURCES:.c=.o)

all : $(NAME)

$(NAME): $(MY_OBJECTS)
	@ar rc $(NAME) $(MY_OBJECTS)

OBJTS :$(MY_SOURCES)
	$(CC) $(CFLAGS) -c $^

clean :
	@rm -rf $(MY_OBJECTS)

fclean : clean
	@rm -rf $(NAME)
re : fclean all
.PHONY: clean fclean re all
