##
## EPITECH PROJECT, 2022
## B-PSU-200-LIL-2-1-minishell2-enzo.boron
## File description:
## Makefile
##

SRC	=	fill_str.c 				\
		my_getopt.c 			\
		my_putchar.c 			\
		my_putstr.c 			\
		my_putnbr.c 			\
		my_realloc.c 			\
		my_sprintf.c 			\
		my_str_to_word_array.c 	\
		my_strcmp.c 			\
		my_strdup.c 			\
		my_strlen_s.c 			\
		my_strncmp.c 			\
		my_strstr.c 			\
		my_memcpy.c				\
		end_string.c			\
		is_print.c				\
		insert_char.c


OBJ	=    $(SRC:.c=.o)

NAME	=	libmysprint.a

LIB	=	sprintf.h

INCLUDE 	= 	cp $(LIB) ../../include

CP 	=	 cp $(NAME) ../../include

MR	=	$(shell find ./ -name "#*#" -delete -o -name "*~" -delete)

.SILENT: $(OBJ)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(CP)
	$(INCLUDE)
	$(MR)

clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME);

re:	fclean all
