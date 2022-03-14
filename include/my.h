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

scene_t *init_scene_menu(int btn, int txt);
game_t *init_game(char *filepath);
sfRenderWindow *create_window(void);
background_t *create_bg(char *path, sfIntRect rect);
button_t *create_btn(char *path, sfIntRect rect);
map_t *create_map(char *filepath);
text_t *create_text(char *str, int size, sfVector2f pos);
obj_t *create_obj(char *asset, sfIntRect rect, sfVector2f pos, sfVector2f scalb);
void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl);
void analyse_event(game_t *game);
void manage_mouse_click(game_t *game, sfMouseButtonEvent mouse);
void destroy_all(game_t *game);
void free_mem(game_t *game);
void display(game_t *game);
void create_scene_menu(game_t *game);
void create_scene_one(scene_t *scene);
void button_click(sfRenderWindow *window, button_t *button, sfIntRect newrect);
void manage_scnmn_one(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_two(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_tree(game_t *game, sfMouseButtonEvent mouse);
void manage_scnmn_four(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_one(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_two(game_t *game, sfMouseButtonEvent mouse);
void manage_scgm_three(game_t *game, sfMouseButtonEvent mouse);

char *get_buffer(char const *filepath);
void get_txtr(map_t *map, char *buf);void get_lvl(map_t *map, char *buf);
void get_size(map_t *map, char *buf);
void get_map(map_t *map, char *buf);

#endif
