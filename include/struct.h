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

typedef struct scene_mn_s {
    background_t *bg;
    button_t **btn;
    text_t **text;
} scene_mn_t;

typedef struct scene_gm_s {
    background_t *bg;
    button_t **btn;
    text_t **text;
    char **map;
} scene_gm_t;

typedef struct game_s {
    int i;
    int exit;
    bool game;
    sfRenderWindow *wndw;
    sfEvent event;
    scene_mn_t **scn;
    sfMusic *menu;
} game_t;

#endif /* !STRUCT_H_ */
