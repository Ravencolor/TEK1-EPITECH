##
## EPITECH PROJECT, 2022
## B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
## File description:
## Makefile
##

SRC 	=	create_sound.c				\
			create_sprite.c				\
			create_text.c				\
			create_window.c				\
			create_text_grass.c			\
			set_origine_sprite.c		\
			set_origine_text.c			\
			collition_text_local.c		\
			create_rectangle.c			\
			set_origine_rect.c			\
			create_items.c				\
			create_music.c				\
			create_window.c				\
			create_view.c				\
			create_window_fullscreen.c	\
			display_case_tilesheet.c	\
			colision_sprite.c			\
			create_queste.c

OBJ     =		$(SRC:.c=.o)

NAME    =		libmycsfml.a

CPH     =		cp -f csfml.h ../../include

CPNAME  =		cp -f $(NAME) ../../include

#.SILENT: $(OBJ)

all: $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@$(CPNAME)
		@$(CPH)

clean:
	@rm -f *.o
	@rm -f *.a

fclean:
	@rm -f $(NAME)

re: fclean all
