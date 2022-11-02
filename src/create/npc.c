
#include "../../include/rpg.h"

npc_t *create_npc(map_t *map)
{
    npc_t *npc = malloc(sizeof(npc_t));
    npc->obj = create_obj("./asset/mob/npc.png", V2F(980, 580), V2F(-0.85, 0.85), INTR(0, 0, 180, 180));
    npc->obj->clock = sfClock_create();
    npc->obj->rect = malloc(sizeof(sfIntRect) * 1);
    npc->obj->rect[0] = INTR(0, 0, 180, 180);
    npc->obj->i = 0;
    npc->obj->loop = 2;
    npc->hitbox = malloc(sizeof(hitbox_t));
    npc->hitbox->rect = FLTR(npc->obj->pos.x - 30, npc->obj->pos.y - 110, 60, 110);
    return npc;
}
