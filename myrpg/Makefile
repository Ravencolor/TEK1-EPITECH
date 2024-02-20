##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Compilation project
##

SRC 	=	src/main.c 					\
			src/click_survol.c 			\
			src/create_box.c			\
			src/create_menu.c 			\
			src/create_txt_settings.c 	\
			src/dead.c 					\
			src/destroy_all.c 			\
			src/dev.c 					\
			src/draw_box.c 				\
			src/draw_credit.c 			\
			src/draw_game.c 			\
			src/draw_menu.c 			\
			src/draw_settings_in_game.c \
			src/draw_settings_music.c 	\
			src/draw_settings.c 		\
			src/status_game_evt.c 		\
			src/put_items.c 			\
			src/main_perso.c 			\
			src/loop.c 					\
			src/life.c 					\
			src/inventary.c 			\
			src/init_var.c 				\
			src/init_ptr.c				\
			src/primary_move.c			\
			src/init_xp.c				\
			src/draw_xp.c				\
			src/create_quest.c			\
			src/create_attack.c			\
			src/collision_items.c		\
			src/pnj.c					\
			src/spritesheet.c			\
			src/enemy.c					\
			src/improve_skills.c		\
			src/draw_screen.c			\
			src/draw_skills.c


OBJ			=	$(SRC:.c=.o)

CC			=	gcc

NAME		=	my_rpg

LIBPRINT  	=	-L lib/printf -lmyprint

LIBMY		= 	-L lib/my -lmy

LIBLIST 	=	-L lib/list -lmylist

LIBSPRINT	=	-L lib/sprintf -lmysprint

CSFML_LIB	=	-L lib/csfml -lmycsfml

CFLAG		+=	-W -Wall -Wextra

VALGRIND	 =	-ggdb3

LIBALL		=	$(LIBMY) $(LIBPRINT) $(LIBLIST) $(LIBSPRINT)\
				$(CSFML_LIB) -I include

CSFML		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

.SILENT: $(OBJ)

say_warning:
	@echo -e "\033[32;01m----->  Warning(s)  <-----\033[;0m"


all:	say_warning $(OBJ)
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(OBJ) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)
	@echo -e "\033[32;01m----->  Done  <-----\033[;0m"

%.o: %.c
	$(CC) $(CFLAG) -c -o $@ $< $(LIBALL) $(CSFML)

my:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) main.c -o $(NAME) $(LIBALL) $(CFLAG) $(VALGRIND) $(CSFML)

test_run:
	@$(CC) tests/test.c -o test -lcriterion --coverage

debug:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(SRC) -o $(NAME) $(LIBALL) $(VALGRIND) $(CSFML)
	@echo -e "\033[33;01m----->  Debug  <-----\033[0m"


seg:
	@$(CC) -o seg seg.c my_putchar.c

clean:
	@make clean -C lib/my -s
	@make clean -C lib/printf -s
	@make clean -C lib/list -s
	@make clean -C lib/sprintf -s
	@make clean -C lib/csfml -s
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f src/*.o
	@rm -f lib/my/*.o
	@rm -f lib/sprintf/*.o
	@rm -f lib/printf/*.o
	@rm -f src/game/*.o
	@rm -f src/menu/*.o
	@rm -f src/dead/*.o
	@rm -f src/fight/*.o
	@rm -f src/inventary/*.o

flag:
	$(CC) $(SRC) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)

fclean: clean
	@make fclean -C  lib/my -s
	@make fclean -C  lib/printf -s
	@make fclean -C  lib/list -s
	@make fclean -C  lib/sprintf -s
	@make fclean -C  lib/csfml -s
	@rm -f coding-style-reports.log
	@rm -f include/*.a
	@rm -f *.a
	@echo -e "\033[31;01m----->  Remove  <-----\033[;0m"


re: fclean all
	@make re -C  lib/my -s
	@make re -C  lib/printf -s
	@make re -C  lib/list -s
	@make re -C  lib/sprintf -s
	@make re -C  lib/csfml -s
