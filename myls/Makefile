##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile myprintf
##

SRC	=	./src/main2.c			\
		./src/my_ls.c			\
		./src/my_printf.c	 	\
		./src/my_put_nbr.c		\
		./src/my_putchar.c		\
		./src/my_putstr.c		\
		./src/my_strcmp.c		\
		./src/my_strcpy.c		\
		./src/my_strlen.c		\
		./src/octal.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
