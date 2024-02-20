##
## EPITECH PROJECT, 2022
## list
## File description:
## Makefile
##

src 	=		add_node.c 			\
				remove_node.c   	\
				setting_node.c  	\
				view_node.c			\

OBJ 	=	$(src.c=.o)

NAME	=	libmylist.a

CPH		=	cp -f list.h ../../include

CPNAME	=	cp -f $(NAME) ../../include

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
