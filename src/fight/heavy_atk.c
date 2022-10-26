/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** heavy_atk
*/

#include "../../include/rpg.h"

void heavy_atk(game_t *game)
{
    for (int i = 0; MOB[i]; i++) {
        if (sfFloatRect_intersects(&MOB[i]->hitbox->rect, &PLY->h_atk, NULL)) {
            MOB[i]->life -= PLY->atk + 1;
            MOB[i]->obj->i = 5;
        }
    }
}