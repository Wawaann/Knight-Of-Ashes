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
mob_t *create_player(game_t *game);
void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl);
void analyse_event(game_t *game);
void manage_mouse_click(game_t *game, sfMouseButtonEvent mouse);
void destroy_all(game_t *game);
void free_mem(game_t *game);
void display(game_t *game);
void display_scene_menu(game_t *game);
void create_scene_menu(game_t *game);
void create_scene_one(scene_t *scene);

char *get_buffer(char const *filepath);
void get_txtr(map_t *map, char *buf);void get_lvl(map_t *map, char *buf);
void get_size(map_t *map, char *buf);
void get_map(map_t *map, char *buf);

void animate(game_t *game);
void move_rect(mob_t *mob, sfIntRect *rect, int offset, int max_value);
void timer(mob_t *mob, float t, int x, int y);

#endif
