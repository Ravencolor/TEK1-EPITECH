##
## EPITECH PROJECT, 2022
## list
## File description:
## Makefile
##

SRC 	=		array_function.c			\
				my_adress_memory_print.c	\
				my_binary_print.c			\
				my_octet_print.c			\
				my_printf.c 				\
				my_put_nbr_print.c 			\
				my_put_usigned_print.c 		\
				my_putchar_print.c			\
				send_argc.c					\
				verification_letter.c 		\
				my_hex_upper_print.c		\
				my_hex_lower_print.c 		\
				my_positive_nbr_print.c		\
				my_putstr_print.c			\
				my_double_print.c


OBJ 	=		$(SRC:.c=.o)

NAME	=		libmyprint.a

CPH 	=		cp -f printf.h ../../include

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
