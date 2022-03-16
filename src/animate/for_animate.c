/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** for_animate
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
        move_rect(mob, &mob->rect[mob->i], x, y);
        sfClock_restart(mob->clock);
    }
}
