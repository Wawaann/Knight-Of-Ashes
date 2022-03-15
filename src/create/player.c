/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** player
*/

#include "../../include/my.h"

sfVector2f get_ply_pos(game_t *game)
{
    return (sfVector2f){160, 475};
}

mob_t *create_player(game_t *game)
{
    mob_t *ply = malloc(sizeof(mob_t));
    ply->sprt = sfSprite_create();
    ply->rect = (sfIntRect){0, 160, 120, 80};
    ply->txtr = sfTexture_createFromFile("./asset/mob/knight.png", &ply->rect);
    ply->pos = get_ply_pos(game);
    sfSprite_setTexture(ply->sprt, ply->txtr, sfFalse);
    sfSprite_setPosition(ply->sprt, ply->pos);
    sfSprite_setScale(ply->sprt, (sfVector2f){2.55, 2.55});
    sfFloatRect tmp = sfSprite_getLocalBounds(ply->sprt);
    sfSprite_setOrigin(ply->sprt, (sfVector2f){tmp.width / 2, tmp.height / 2});
    return ply;
}
