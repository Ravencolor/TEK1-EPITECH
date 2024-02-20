##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC 	=	main.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS = -W -Wextra -Wall -I./includes

NAME	=	solver

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
