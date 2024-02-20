##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	./src/main.c		\
		./src/game/game.c	\
		./src/init.c		\
		./src/my_putstr.c	\
		./src/my_putchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I../include $(CFLAGS) $(CSFML)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
