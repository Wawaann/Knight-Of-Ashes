/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** struct
*/

#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct button_s {
    sfSprite *sprt;
    sfTexture *txtr;
    sfVector2f pos;
    sfIntRect rect;
} button_t;

typedef struct background_s {
    sfSprite **sprt;
    sfTexture **txtr;
    sfIntRect *rect;
} background_t;

typedef struct text_s {
    char *str;
    sfText *text;
    sfFont *font;
} text_t;

typedef struct map_s {
    char *txtr;
    char **lvl;
    char **map;
    int size;
    int i;
} map_t;

typedef struct obj_s {
    sfClock *clock;
    sfTime time;
    sfSprite *sprt;
    sfTexture *txtr;
    sfIntRect rect;
    sfVector2f pos;
    float seconds;
} obj_t;

typedef struct fire_s {
    obj_t *obj;
    char **lvl;
} fire_t;

typedef struct mob_s {
    sfClock *clock;
    sfTime time;
    sfSprite *sprt;
    sfTexture *txtr;
    sfVector2f pos;
    sfIntRect *rect;
    int i;
    int loop;
    int souls;
    float atk_o;
    float atk_t;
    float life;
    float stamina;
    float seconds;
} mob_t;

typedef struct scene_s {
    background_t *bg;
    button_t **btn;
    text_t **text;
    map_t *map;
    fire_t **fire;
} scene_t;

typedef struct game_s {
    char *filepath;
    int i;
    int exit;
    bool game;
    sfRenderWindow *wndw;
    sfEvent event;
    scene_t **scn;
    mob_t *ply;
} game_t;

#endif /* !STRUCT_H_ */
