##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	my_put_nbr.c	\
		my_putchar.c	\
		my_str_isalpha.c	\
		my_strlen.c	\

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
