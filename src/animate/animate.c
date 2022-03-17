/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** animate
*/

#include "../../include/my.h"

void animate_knight(mob_t *ply)
{
    if (ply->i == 0 || ply->i == 1 || ply->i == 8)
        timer(ply, 0.06, 120, 1200);
    if (ply->i == 2 || ply->i == 3)
        timer(ply, 0.07, 120, 360);
    if (ply->i == 4)
        timer(ply, 0.06, 120, 1440);
    if (ply->i == 5)
        timer(ply, 0.09, 120, 720);
    if (ply->i == 6)
        timer(ply, 0.07, 120, 480);
    if (ply->i == 7)
        timer(ply, 0.09, 120, 600);
    sfSprite_setTextureRect(ply->sprt, ply->rect[ply->i]);
    sfSprite_setPosition(ply->sprt, ply->pos);
}

void animate(game_t *game)  
{
    animate_knight(game->ply);
}
