/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** animate
*/

#include "../../include/my.h"

void animate_knight(obj_t *obj)
{
    if (obj->i == 0 || obj->i == 1 || obj->i == 8)
        timer(obj, 0.06, 120, 1200);
    if (obj->i == 2 || obj->i == 3)
        timer(obj, 0.07, 120, 360);
    if (obj->i == 4)
        timer(obj, 0.06, 120, 1440);
    if (obj->i == 5)
        timer(obj, 0.09, 120, 720);
    if (obj->i == 6)
        timer(obj, 0.07, 120, 480);
    if (obj->i == 7)
        timer(obj, 0.09, 120, 600);
    sfSprite_setTextureRect(obj->sprt, obj->rect[obj->i]);
    sfSprite_setPosition(obj->sprt, obj->pos);
}

void animate(game_t *game)  
{
    animate_knight(game->ply->obj);
}
