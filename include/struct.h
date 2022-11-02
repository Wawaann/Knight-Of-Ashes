
#include "../lib/my/lib.h"
#include "../lib/csfml/include/SFML/myAudio.h"
#include "../lib/csfml/include/SFML/myGraphics.h"
#include "../lib/csfml/include/SFML/mySystem.h"
#include "../lib/csfml/include/SFML/myWindow.h"
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct background_s {
        sfSprite **sprt;
        sfTexture **txtr;
        sfIntRect *rect;
        sfVector2f *pos;
    } background_t;

    typedef struct button_s {
        sfSprite *sprt;
        sfTexture *txtr;
        sfVector2f pos;
        sfIntRect rect;
        int i;
    } button_t;

    typedef struct text_s {
        char *str;
        sfText *text;
        sfFont *font;
        sfVector2f pos;
    } text_t;

    typedef struct obj_s {
        sfClock *clock;
        sfTime time;
        sfSprite *sprt;
        sfTexture *txtr;
        sfIntRect *rect;
        sfVector2f pos;
        bool display;
        int i;
        int loop;
        float seconds;
    } obj_t;

    typedef struct dialogue_s {
        sfClock *clock;
        sfTime time;
        float seconds;
        obj_t *obj;
        text_t **fisrt;
        text_t **after;
        int i;
    } dialogue_t;

    typedef struct hitbox_s {
        sfFloatRect rect;
        float y;
    } hitbox_t;

    typedef struct fire_s {
        hitbox_t *hitbox;
        obj_t *obj;
        obj_t *fx;
        char **lvl;
        int i;
    } fire_t;

    typedef struct map_s {
        sfVector2f ply_pos;
        hitbox_t **hitbox;
        char *txtr;
        char **lvl;
        char **map;
        int move;
        int size;
        int nb_lvl;
        int i;
    } map_t;

    typedef struct mob_s {
        bool hit;
        obj_t *obj;
        hitbox_t *hitbox;
        char type;
        float life;
        float atk;
    } mob_t;

    typedef struct npc_s {
        obj_t *obj;
        hitbox_t *hitbox;
        dialogue_t *dial;
    } npc_t;

    typedef struct ply_s {
        obj_t *obj;
        hitbox_t *hitbox;
        sfFloatRect h_atk;
        bool hit;
        bool move;
        int fall;
        int souls;
        int lvl;
        int atk;
        int def;
        float life;
        float stamina;
        float velocity;
        float gravity;
    } ply_t;

    typedef struct menu_s {
        button_t **btn;
        text_t **txt;
        sfSound **sound;
    } menu_t;

    typedef struct item_s {
        obj_t *obj;
        hitbox_t *hitbox;
        float attack;
        float defense;
        bool display;
    } item_t;

    typedef struct scene_s {
        background_t *bg;
        button_t **btn;
        fire_t *fire;
        map_t *map;
        mob_t **mob;
        npc_t *npc;
        text_t **text;
        item_t **item;
    } scene_t;

    typedef struct wndw_s {
        sfRenderWindow *wndw;
        sfEvent event;
        sfView *view;
    } wndw_t;

    typedef struct inventory_s {
        sfSprite *sprt;
        sfTexture *txtr;
        sfVector2f pos;
        obj_t **item;
        bool display;
    } inventory_t;

    typedef struct hud_s {
        obj_t **heart;
        obj_t **stamina;
        obj_t *hud;
    } hud_t;

    typedef struct end_s {
        text_t **txt;
        obj_t *obj;
        sfClock *clock;
        sfTime time;
        float seconds;
    } end_t;

    typedef struct game_s {
        int i;
        int exit;
        bool game;
        bool is_end;
        bool eric;
        menu_t **mnu;
        scene_t **scn;
        ply_t *ply;
        wndw_t *wndw;
        inventory_t *inv;
        hud_t *hud;
        end_t *end;
        sfMusic *music;
    } game_t;

#endif
