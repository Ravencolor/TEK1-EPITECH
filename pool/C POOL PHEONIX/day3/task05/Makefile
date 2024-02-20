##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=	sorted_params.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	sorted_params

CFLAGS	=	-W -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
