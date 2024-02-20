##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	./src/main.c		\
		./src/my_atoi.c		\
		./src/my_printf.c	\
		./src/my_put_nbr.c	\
		./src/my_putstr.c	\
		./src/my_putchar.c	\
		./src/octal.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	lem_in

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
