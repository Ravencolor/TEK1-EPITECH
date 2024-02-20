##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC 	=	main.c				\
			src/option_stylo.c	\
			src/window.c		\
			src/sprite.c 		\
			src/option_file.c 	\
			src/help.c 			\
			lib/my_putstr.c		\
			lib/my_strcmp.c		\
			lib/my_putchar.c	\

OBJ	=	$(SRC:.c=.o)

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

CFLAGS = -W -Wextra -Wall -I./includes

NAME	=	my_paint

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc $(OBJ) -o $(NAME) -I../includes $(CFLAGS) $(CSFML) -g

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all
