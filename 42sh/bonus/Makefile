##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile for project
##

NAME = 42sh

OBJ = $(SRC:.c=.o)

SRC =  	src/main.c \
		src/shell/prompt.c \
		src/shell/my_execve.c \
		src/shell/shell.c \
		src/shell/return_value.c \
		src/shell/mark_management.c \
		src/all_utils/env_fonction.c \
		src/all_utils/segfault.c \
		src/all_utils/history_get_line.c \
		src/all_utils/history_get_two.c \
		src/all_utils/my_get_line.c \
		src/all_utils/fonction.c \
		src/all_utils/fonction_two.c \
		src/implement_fonction/all_fonction.c \
		src/implement_fonction/my_cd.c \
		src/implement_fonction/my_cd_two.c \
		src/implement_fonction/my_echo.c \
		src/implement_fonction/my_echo_two.c \
		src/implement_fonction/my_setenv.c \
		src/implement_fonction/my_setenv_two.c \
		src/implement_fonction/my_unsetenv.c \
		src/implement_fonction/history.c \
		src/implement_fonction/create_history.c \
		src/other_implement_fonction/my_alias_create.c \
		src/other_implement_fonction/my_alias.c \
		src/other_implement_fonction/my_pipes.c \
		src/other_implement_fonction/my_pipes_two.c \
		src/other_implement_fonction/my_redirection.c \

LIB = -L ./lib/my/ -lmy

CFLAGS = -I./include/ -Wall -Wextra -g

cc = gcc

all: $(NAME)

.SILENT: $(OBJ)

$(NAME): $(OBJ)
	@echo -e "\033[32;01m[--------make-------------]\033[;0m"
	@echo -e "gcc $(OBJ) -o $(NAME) $(CFLAGS)"
	@make -C lib/my/ -s
	@$(cc) $(OBJ) -o $(NAME) $(CFLAGS) $(LIB)

clean :
	@echo -e "\033[31;01m--------make clean-------------\033[;0m"
	rm -f $(OBJ)
	@make clean -C lib/my/ -s

fclean : clean
	@echo -e "\033[31;01m--------make fclean-------------\033[;0m"
	rm -f $(NAME)
	@make fclean -C lib/my/ -s

re : fclean all

test:
	./tests/test.sh

test_docker:
	./tests/test_docker.sh
