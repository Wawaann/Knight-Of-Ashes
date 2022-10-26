/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** item
*/

#include "../../include/rpg.h"

item_t *create_item(char *path, map_t *map, int stat, int itm)
{
    item_t *item = malloc(sizeof(item_t));
    item->display = true;
    item->hitbox = malloc(sizeof(hitbox_t));
    if (itm == 0) {
        item->obj = create_obj(path, get_pos(map, 's', 0, 0),
        V2F(0.7, 0.7), INTR(0, 0, 40, 80));
        item->attack = stat;
        item->hitbox->rect = FLTR(item->obj->pos.x - 14, item->obj->pos.y - 56, 28, 56);
    } else {
        item->obj = create_obj(path, get_pos(map, 'C', 0, 0),
        V2F(0.3, 0.3), INTR(0, 0, 174, 162));
        item->defense = stat;
        item->hitbox->rect = FLTR(item->obj->pos.x - 26.1, item->obj->pos.y - 24.3, 52.2, 48.6);
    }
    return (item);
}
