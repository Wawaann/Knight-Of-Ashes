
ANIMATE =	src/animate/animate.c 		\
			src/animate/for_animate.c 	\
			src/animate/knight.c	 	\
			src/animate/mob.c		 	\

CREATE	=	src/create/background.c 	\
			src/create/button.c 		\
			src/create/end.c 			\
			src/create/fire.c	 		\
			src/create/hud.c			\
			src/create/map.c 			\
			src/create/menu.c 			\
			src/create/mob.c 			\
			src/create/npc.c 			\
			src/create/obj.c 			\
			src/create/player.c 		\
			src/create/scene.c	 		\
			src/create/sound.c	 		\
			src/create/window.c 		\
			src/create/text.c 			\
			src/create/view.c 			\
			src/create/item.c			\
			src/create/inventory.c 		\

DIPS 	=	src/display/all.c			\
			src/display/end.c 			\
			src/display/menu.c 			\
			src/display/scene.c 		\

EVT		=	src/event/analyse.c 		\
			src/event/input_game.c 		\
			src/event/input_menu.c 		\
			src/event/actions.c 		\

FGT		=	src/fight/speed_atk.c		\
			src/fight/heavy_atk.c 		\

INIT 	=	src/init/game.c 			\
			src/init/menu.c 			\
			src/init/scene.c			\

MAP 	=	src/map/get_pos.c 			\
			src/map/hitbox.c 			\
			src/map/player.c 			\

MOVE 	=	src/move/move.c 			\
			src/move/player.c 			\
			src/move/die.c				\

READ 	=	src/read/for_read.c 		\
			src/read/my_strtok.c 		\
			src/read/read.c 			\

SRC 	=	src/my_rpg.c 		\
			src/destroy_all.c 	\
			src/free_mem.c 		\
			$(ANIMATE)			\
			$(CREATE)			\
			$(DIPS)				\
			$(EVT)				\
			$(FGT)				\
			$(INIT)				\
			$(MAP)				\
			$(MOVE)				\
			$(READ)				\

OBJECT	=	$(SRC:.c=.o)
OBJ		=	obj/*.o obj/**/*.o

NAME    =   my_rpg

BLUE    =   \e[34m
BOLD    =   \e[1m
CYAN    =   \e[36m
DEFAULT =   \e[0m
GREEN   =   \e[32m
MAGEN   =   \e[35m
RED		=	\e[31m

AUDIO   =	-L./lib/lib -lcsfml-audio
GRAFIC  =   -L./lib/lib -lcsfml-graphics
SYSTEM  =   -L./lib/lib -lcsfml-system
WINDOW	=	-L./lib/lib -lcsfml-window

CSFML   =	$(AUDIO) $(GRAFIC) $(SYSTEM) $(WINDOW)
LIB		=	-L./lib/lib -llib -L./lib/lib -lmy_printf

all:    $(NAME)

$(NAME):	${OBJECT}
	@/bin/echo -e "$(BOLD)$(CYAN)Compilation de la lib..."
	@make -C lib/ --quiet
	@/bin/echo -e "$(BOLD)$(GREEN)Compilation términée"
	@/bin/echo -e "$(BOLD)$(CYAN)Compilation des fichiers sources..."
	@cp -r src/* obj
	@rm -rf obj/*.c obj/**/*.c
	@rm -rf src/*.o src/**/*.o
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CSFML) -g3
	@/bin/echo -e "$(BOLD)$(GREEN)Compilation terminée avec succès !$(DEFAULT)"

clean:
	@/bin/echo -e "$(DEFAULT)$(BLUE)Suppression des fichiers de la librairie..."
	@rm -rf obj/*
	@make clean -C lib/ --quiet
	@/bin/echo -e "$(DEFAULT)$(GREEN)Suppression terminée avec succès."

fclean:         clean
	@/bin/echo -e "$(DEFAULT)$(BLUE)Suppression du binaire..."
	@rm -f $(NAME)
	@rm -rf *.gc*
	@make fclean -C lib/ --quiet
	@/bin/echo -e "$(DEFAULT)$(GREEN)Suppression terminée avec succès."

re: fclean all
