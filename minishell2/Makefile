##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	./src/main.c		\
		./src/executable.c	\
		./src/error.c		\
		./src/commandes.c	\
		./src/cd.c			\
		./src/my_printf.c	\
		./src/my_put_nbr.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/my_strcat.c	\
		./src/my_strcmp.c	\
		./src/my_strcpy.c	\
		./src/my_strlen.c	\
		./src/my_strncmp.c	\
		./src/my_strncpy.c	\
		./src/octal.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
