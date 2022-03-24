/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** player
*/

#include "../../include/my.h"

void set_ply_rect(ply_t *ply)
{
    ply->obj->rect = malloc(sizeof(sfIntRect) * 9);
    ply->obj->rect[0] = (sfIntRect){0, 0, 120, 80};
    ply->obj->rect[1] = (sfIntRect){0, 80, 120, 80};
    ply->obj->rect[2] = (sfIntRect){0, 160, 120, 80};
    ply->obj->rect[3] = (sfIntRect){0, 240, 120, 80};
    ply->obj->rect[4] = (sfIntRect){0, 320, 120, 80};
    ply->obj->rect[5] = (sfIntRect){0, 400, 120, 80};
    ply->obj->rect[6] = (sfIntRect){0, 480, 120, 80};
    ply->obj->rect[7] = (sfIntRect){0, 560, 120, 80};
    ply->obj->rect[8] = (sfIntRect){0, 640, 120, 80};
    ply->obj->i = 0;
    ply->obj->loop = 4;
}

ply_t *create_player(game_t *game)
{
    ply_t *ply = malloc(sizeof(ply_t));
    ply->obj = malloc(sizeof(obj_t));
    set_ply_rect(ply);
    ply->obj->clock = sfClock_create();
    ply->obj->sprt = sfSprite_create();
    ply->obj->txtr = sfTexture_createFromFile("./asset/mob/knight.png", NULL);
    ply->obj->pos = get_pos(game->scn[game->i]->map, 'P', 45, -5);
    sfSprite_setTexture(ply->obj->sprt, ply->obj->txtr, sfFalse);
    sfSprite_setTextureRect(ply->obj->sprt, ply->obj->rect[ply->obj->i]);
    sfSprite_setScale(ply->obj->sprt, (sfVector2f){2.25, 2.25});
    sfSprite_setOrigin(ply->obj->sprt, (sfVector2f){60, 40});
    sfSprite_setPosition(ply->obj->sprt, ply->obj->pos);
    return ply;
}
