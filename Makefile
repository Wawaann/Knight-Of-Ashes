##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

ANIMATE 	=		src/animate/animate.c 		\
					src/animate/for_animate.c 	\
					src/animate/move.c 			\

CREATE		=		src/create/background.c 	\
					src/create/button.c 		\
					src/create/map.c 			\
					src/create/player.c 		\
					src/create/scene_menu.c 	\
					src/create/window.c 		\
					src/create/text.c 			\

DIPS 		=		src/display/all.c			\
					src/display/scene.c 		\

EVT			=		src/event/analyse.c 		\
					src/event/manage_input.c 	\

INIT 		=		src/init/game.c 		\
					src/init/scene_menu.c	\

MAP 		= 		src/map/get_pos.c 		\

UTILS		=		lib/my/lib_printf/src/utils.c   	\
					src/utils/for_read.c 				\
					src/utils/read.c 					\

SRC 		=		src/my_rpg.c 		\
					src/destroy_all.c 	\
					src/free_mem.c 		\
					$(ANIMATE)			\
					$(CREATE)			\
					$(DIPS)				\
					$(EVT)				\
					$(INIT)				\
					$(MAP)				\
					$(UTILS)			\

OBJ     	=       $(SRC:.c=.o)

NAME    	=       my_rpg

BLUE    	=       \e[34m
BOLD    	=       \e[1m
CYAN    	=       \e[36m
DEFAULT 	=       \e[0m
GREEN   	=       \e[32m
MAGEN   	=       \e[35m
RED			=		\e[31m

AUDIO       =      -lcsfml-audio
GRAFIC      =      -lcsfml-graphics
SYSTEM      =      -lcsfml-system
WINDOW      =      -lcsfml-window

CSFML       =       $(AUDIO) $(WINDOW) $(GRAFIC) $(SYSTEM)
LIB			=		-L./lib/my -llib -L./lib/my -lmy_printf

all:    $(NAME)

$(NAME):
	@echo -e "$(BOLD)$(CYAN)Compilation de la lib..."
	@make -C lib/my --quiet
	@echo -e "$(BOLD)$(GREEN)Compilation términée"
	@echo -e "$(BOLD)$(CYAN)Compilation des fichiers sources..."
	@gcc -o $(NAME) $(SRC) $(LIB) $(CSFML) -g3
	@echo -e "$(BOLD)$(GREEN)Compilation terminée avec succès !$(DEFAULT)"

clean:
	@echo -e "$(DEFAULT)$(BLUE)Suppression des fichiers de la librairie..."
	@rm -f $(OBJ)
	@make clean -C lib/my --quiet
	@echo -e "$(DEFAULT)$(GREEN)Suppression terminée avec succès."

fclean:         clean
	@echo -e "$(DEFAULT)$(BLUE)Suppression du binaire..."
	@rm -f $(NAME)
	@make fclean -C lib/my --quiet
	@echo -e "$(DEFAULT)$(GREEN)Suppression terminée avec succès."

re: fclean all