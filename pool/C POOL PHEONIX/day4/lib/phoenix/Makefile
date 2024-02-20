##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	is_prime_number.c	\
		my_putchar.c		\
		my_strcpy.c			\
		my_strncmp.c		\
		my_strstr.c			\
		show_number.c		\
		show_string.c		\
		to_number.c			\
		reverse_string.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libphoenix.a

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
