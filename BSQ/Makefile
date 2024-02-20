##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## bsq
##

NAME	=	bsq

SRC	=	src/bsq.c		\
		src/my_lines.c	\
		src/error.c	\
		src/my_strlen.c		\
		src/my_putchar.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
