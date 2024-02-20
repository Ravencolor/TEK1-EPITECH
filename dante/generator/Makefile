##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC 	=	main.c					\
		./lib/my_printf.c			\
		./lib/my_getnbr.c			\
		./lib/my_put_nbr.c			\
		./lib/my_putchar.c			\
		./lib/my_putfnbr.c			\
		./lib/my_putstr.c			\
		./lib/my_str_isnum.c		\
		./lib/my_strcat.c			\
		./lib/my_strcmp.c			\
		./lib/my_strcpy.c			\
		./lib/my_strlen.c			\

OBJ	=	$(SRC:.c=.o)

CFLAGS = -W -Wextra -Wall -I./includes

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)


clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all

auteur:
		echo $(USER) > auteur
