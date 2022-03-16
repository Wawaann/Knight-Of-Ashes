/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** player
*/

#include "../../include/my.h"

sfVector2f get_ply_pos(game_t *game)
{
    return (sfVector2f){160, 580};
}

mob_t *create_player(game_t *game)
{
    mob_t *ply = malloc(sizeof(mob_t));
    ply->clock = sfClock_create();
    ply->sprt = sfSprite_create();
    ply->rect = (sfIntRect){0, 80, 120, 80};
    ply->txtr = sfTexture_createFromFile("./asset/mob/knight.png", NULL);
    ply->pos = get_ply_pos(game);
    sfSprite_setTexture(ply->sprt, ply->txtr, sfFalse);
    sfSprite_setTextureRect(ply->sprt, ply->rect);
    sfSprite_setScale(ply->sprt, (sfVector2f){2.55, 2.55});
    sfFloatRect tmp = sfSprite_getLocalBounds(ply->sprt);
    sfSprite_setOrigin(ply->sprt, (sfVector2f){0, 80});
    sfSprite_setPosition(ply->sprt, ply->pos);
    return ply;
}
