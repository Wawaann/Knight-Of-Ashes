/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** animate
*/

#include "../../include/my.h"

void move_rect(mob_t *mob, sfIntRect *rect, int offset, int max_value)
{
    if (rect->left + offset >= max_value) {
        rect->left = 0;
    } else
        rect->left += offset;
}

void timer(mob_t *mob, float t, int x, int y)
{
    mob->time = sfClock_getElapsedTime(mob->clock);
    mob->seconds = mob->time.microseconds / 1000000.0;
    if (mob->seconds > t) {
        move_rect(mob, &mob->rect, x, y);
        sfClock_restart(mob->clock);
    }
}

void animate_knight(mob_t *ply)
{
    timer(ply, 0.06, 120, 1200);
    sfSprite_setTextureRect(ply->sprt, ply->rect);
    sfSprite_setPosition(ply->sprt, ply->pos);
}

void animate(game_t *game)  
{
    animate_knight(game->ply);
}
