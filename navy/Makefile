##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	./src/main.c		\
		./src/my_getnbr.c	\
		./src/my_put.c		\
		./src/navy.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_navy

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
