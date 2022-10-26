/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** player
*/

#include "../../include/rpg.h"

bool player_can_move(ply_t *ply, map_t *map, int move)
{
    sfFloatRect tmp;

    for (int i = 0; map->hitbox[i]; i++) {
        sfFloatRect_intersects(&ply->hitbox->rect, &map->hitbox[i]->rect, &tmp);
        if (tmp.height >= 10 && tmp.width >= 1 && move == 1) {
            return false;
        } if (tmp.height >= 10 && tmp.width >= 1 && move == 2) {
            return false;
        }
    }
    return true;
}
