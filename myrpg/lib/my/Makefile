##
## EPITECH PROJECT, 2022
## B-PSU-200-LIL-2-1-minishell1-enzo.boron
## File description:
## Makefile
##

SRC		=	my_free.c 						\
			my_persostr.c					\
			my_put_nbr.c					\
			my_str_to_world_array.c 		\
			my_str_to_world_array_perso.c	\
			my_strcat.c						\
			my_strchr.c						\
			my_strcmp.c						\
			my_strcpy.c						\
			file_info.c						\
			my_strdup.c						\
			my_strlen.c						\
			my_strncmp.c					\
			my_strstr.c						\
			my_putstr.c 					\
			my_putchar.c					\
			my_nstrdup.c					\
			my_strtab.c						\
			my_cpytab.c						\
			display_double_array.c			\
			my_getnbr.c						\
			converct_char_int.c


OBJ 	=		$(SRC:.c=.o)

NAME	=		libmy.a

CPH 	=		cp -f my.h ../../include

CPNAME 	=		cp -f $(NAME) ../../include

.SILENT: $(OBJ)

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(CPNAME)
	$(CPH)

clean:
	rm -f *.o
	rm -f *.a

fclean:
	rm -f $(NAME)

re: fclean all
