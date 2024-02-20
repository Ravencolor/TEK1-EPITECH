##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	rush.c	\
		main.c	\
		tools.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L lib/my/ -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all
