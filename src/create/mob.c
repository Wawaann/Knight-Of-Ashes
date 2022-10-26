/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** mob
*/

#include "../../include/rpg.h"

static void set_rect(obj_t *obj)
{
    obj->rect = malloc(sizeof(sfIntRect) * 7);
    obj->rect[0] = INTR(0, 0, 100, 64);
    obj->rect[1] = INTR(0, 64, 100, 64);
    obj->rect[2] = INTR(0, 128, 100, 64);
    obj->rect[3] = INTR(0, 192, 100, 64);
    obj->rect[4] = INTR(0, 256, 100, 64);
    obj->rect[5] = INTR(0, 320, 100, 64);
    obj->rect[6] = INTR(0, 384, 100, 64);
    obj->i = 0;
    obj->loop = 2;
}

mob_t *create_boss(map_t *map, char *asset, char ch)
{
    mob_t *mob = malloc(sizeof(mob_t));
    mob->obj = create_obj(asset, get_pos(map, ch, 0, 0), V2F(-3.2, 3.2), INTR(0, 0, 100, 64));
    set_rect(mob->obj);
    mob->hitbox = malloc(sizeof(hitbox_t));
    mob->hitbox->rect = FLTR(mob->obj->pos.x - 50, mob->obj->pos.y - 120, 110, 120);
    mob->type = ch;
    mob->hit = true;
    mob->atk = 2;
    mob->life = 5;
    return mob;
}

mob_t *create_mob(map_t *map, char *asset, char ch)
{
    mob_t *mob = malloc(sizeof(mob_t));
    mob->obj = create_obj(asset, get_pos(map, ch, 0, 0), V2F(-2.7, 2.7), INTR(0, 0, 100, 64));
    set_rect(mob->obj);
    mob->hitbox = malloc(sizeof(hitbox_t));
    mob->hitbox->rect = FLTR(mob->obj->pos.x - 30, mob->obj->pos.y - 100, 60, 100);
    mob->type = ch;
    mob->hit = true;
    mob->atk = 1;
    mob->life = 2;
    return mob;
}
