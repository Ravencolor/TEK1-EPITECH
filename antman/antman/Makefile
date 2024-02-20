##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## dsk
##

OBJ = $(SRC:.c=.o);

sor = src/

SRC =  $(shell ls $(sor)*.c)

NAME = antman

LIB = -L ./lib/my/ -lmy

CC = gcc

CFLAGS = -I./include/ -Wall -Wextra

all: $(NAME)

$(NAME): $(SRC)
	@echo "\033[32;01m -- Creation de la librairie -- "
	@make -C lib/my/ -s
	@echo "\033[33;01m -- Creation de l'executable -- "
	@echo "\033[34;01m    ___ __  __ ___  ___ "
	@echo "   | __|\ \/ /| __|/ __| "
	@echo "   | _|  >  < | _|| (__  "
	@echo "   |___|/_/\_\|___|\___| \n"
	@gcc $(SRC) -o $(NAME) $(LIB) $(CFLAGS)
	@echo "\033[34;01m   Repository : src/ "
	@echo "\033[34;01m   file : $(SRC) "
	@echo "\033[34;01m   Name : $(NAME) "
	@echo "\033[34;01m   OK \n"

clean :
	@rm -f $(OBJ)
	@make clean -C lib/my/ -s

cleannolib :
	@rm -f $(OBJ)

fclean :
	@echo "\033[31;01m   ___  _     ___    _    _  _  "
	@echo "  / __|| |   | __|  /_\  | \| | "
	@echo " | (__ | |__ | _|  / _ \ |    | "
	@echo "  \___||____||___|/_/ \_\|_|\_| \n"
	@rm -f $(NAME)
	@echo "    Delete exec : $(NAME) "
	@make fclean -C lib/my/ -s
	@echo "    OK \n"

re : fclean all
