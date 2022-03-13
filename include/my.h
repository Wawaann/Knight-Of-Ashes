/*
** EPITECH PROJECT, 2021
** my_header
** File description:
** Biblihotèque contenant tous les prototypes des fonctions
*/

#include "struct.h"
#include "../lib/my/lib.h"

#ifndef MY
    #define MY

scene_mn_t *init_scene_menu(int btn, int txt);
game_t *init_game(void);
sfRenderWindow *create_window(void);
background_t *create_bg(char *path, sfIntRect rect);
button_t *create_btn(char *path, sfIntRect rect);
void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl);
text_t *create_text(char *str, int size, sfVector2f pos);
void analyse_event(game_t *game);
void manage_mouse_click(game_t *game, sfMouseButtonEvent mouse);
void destroy_all(game_t *game);
void free_mem(game_t *game);
void display(game_t *game);
void create_scene_one(scene_mn_t *scene);
void create_scene_two(scene_mn_t *scene);
void create_scene_tree(scene_mn_t *scene);
void create_scene_four(scene_mn_t *scene);
void create_scene_menu(game_t *game);
void create_scene_game(game_t *game);
void button_click(sfRenderWindow *window, button_t *button, sfIntRect newrect);
scene_gm_t *init_scene_game(int btn, int txt);
void manage_scnmn_one(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_two(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_tree(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_four(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_one(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_two(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_three(game_t *game, sfMouseButtonEvent mouse);

#endif
