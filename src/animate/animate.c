/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** animate
*/

#include "../../include/my.h"

void animate_knight(mob_t *ply)
{
    timer(ply, 0.06, 120, 1200);
    sfSprite_setTextureRect(ply->sprt, ply->rect[ply->i]);
    sfSprite_setPosition(ply->sprt, ply->pos);
}

void animate(game_t *game)  
{
    animate_knight(game->ply);
}
