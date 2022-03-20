/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** destroy_all
*/

#include "../include/my.h"

void destroy_mob(mob_t *mob)
{
    sfSprite_destroy(mob->obj->sprt);
    sfTexture_destroy(mob->obj->txtr);
    sfClock_destroy(mob->obj->clock);
}

void destroy_all(game_t *game)
{
    destroy_mob(game->ply);
    sfRenderWindow_destroy(game->wndw);
}
