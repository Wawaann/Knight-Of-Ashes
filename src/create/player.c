/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** player
*/

#include "../../include/my.h"

void set_ply_rect(mob_t *ply)
{
    ply->rect = malloc(sizeof(sfIntRect) * 8);
    ply->rect[0] = (sfIntRect){0, 0, 120, 80};
    ply->rect[1] = (sfIntRect){0, 80, 120, 80};
    ply->rect[2] = (sfIntRect){0, 160, 120, 80};
    ply->rect[3] = (sfIntRect){0, 240, 120, 80};
    ply->rect[4] = (sfIntRect){0, 320, 120, 80};
    ply->rect[5] = (sfIntRect){0, 400, 120, 80};
    ply->rect[6] = (sfIntRect){0, 480, 120, 80};
    ply->rect[7] = (sfIntRect){0, 560, 120, 80};
    ply->i = 0;
}

sfVector2f get_ply_pos(game_t *game)
{
    return (sfVector2f){200, 480+80};
}

mob_t *create_player(game_t *game)
{
    mob_t *ply = malloc(sizeof(mob_t));
    set_ply_rect(ply);
    ply->clock = sfClock_create();
    ply->sprt = sfSprite_create();
    ply->txtr = sfTexture_createFromFile("./asset/mob/knight.png", NULL);
    ply->pos = get_ply_pos(game);
    sfSprite_setTexture(ply->sprt, ply->txtr, sfFalse);
    sfSprite_setTextureRect(ply->sprt, ply->rect[ply->i]);
    sfSprite_setScale(ply->sprt, (sfVector2f){2.55, 2.55});
    sfSprite_setOrigin(ply->sprt, (sfVector2f){60, 40});
    sfSprite_setPosition(ply->sprt, ply->pos);
    return ply;
}
