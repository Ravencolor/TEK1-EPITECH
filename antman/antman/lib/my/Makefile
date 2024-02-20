##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## dsk
##

SRC = $(shell find -name '*.c')

OBJ = $(SRC:.c=.o);

NAMELIB = libmy.a

CFLAGS = -I./../../include/

all:	$(NAMELIB)

$(NAMELIB): $(SRC)
	@echo "\033[34;01m    _     ___  ___ "
	@echo "   | |   |_ _|| _ ) "
	@echo "   | |__  | | | _ \ "
	@echo "   |____||___||___/ \n"
	@echo "   Repository : lib/my/ "
	@echo "   File : $(SRC) "
	@gcc -c $(SRC) $(CFLAGS) -Wall -Wextra
	@ar rc $(NAMELIB) $(OBJ)
	@echo "   Name : $(NAMELIB) "
	@make cleansilent
	@echo "   Clean .o "
	@echo "   Ok \n"

clean :
	rm -f $(OBJ)
	@echo "\033[31;01m    Delete all.o : $(OBJ) "

cleansilent :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAMELIB)
	@echo "\033[31;01m    Delete library : $(NAMELIB) "

re : fclean all
