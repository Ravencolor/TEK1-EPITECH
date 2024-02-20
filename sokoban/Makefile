##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	./src/main.c 		\
		./src/strlen.c		\
		./src/my_strcmp.c	\
		./src/my_putstr.c	\
		./src/my_putchar.c


OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../includes $(CFLAGS) -lcurses
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
