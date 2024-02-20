##
## EPITECH PROJECT, 2022
## push_swap
## File description:
## Makefile
##


SRC	=	./src/main.c 		\
		./src/my_printf.c	\
		./src/my_put_nbr.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/my_strcpy.c	\
		./src/my_swap.c		\
		./src/octal.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../includes $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
