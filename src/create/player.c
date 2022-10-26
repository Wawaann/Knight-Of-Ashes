
#include "../../include/rpg.h"

void set_ply_rect(ply_t *ply)
{
    ply->obj->rect = malloc(sizeof(sfIntRect) * 9);
    ply->obj->rect[0] = INTR(0, 0, 120, 80);
    ply->obj->rect[1] = INTR(0, 80, 120, 80);
    ply->obj->rect[2] = INTR(0, 160, 120, 80);
    ply->obj->rect[3] = INTR(0, 240, 120, 80);
    ply->obj->rect[4] = INTR(0, 320, 120, 80);
    ply->obj->rect[5] = INTR(0, 400, 120, 80);
    ply->obj->rect[6] = INTR(0, 480, 120, 80);
    ply->obj->rect[7] = INTR(0, 560, 120, 80);
    ply->obj->rect[8] = INTR(0, 640, 120, 80);
    ply->obj->i = 0;
    ply->obj->loop = 4;
}

void set_sprite_ply(ply_t *ply)
{
    sfSprite_setTexture(ply->obj->sprt, ply->obj->txtr, sfFalse);
    sfSprite_setTextureRect(ply->obj->sprt, ply->obj->rect[ply->obj->i]);
    sfSprite_setScale(ply->obj->sprt, V2F(2.25, 2.25));
    sfSprite_setOrigin(ply->obj->sprt, V2F(60, 80));
    sfSprite_setPosition(ply->obj->sprt, ply->obj->pos);
}

ply_t *create_player(game_t *game)
{
    ply_t *ply = malloc(sizeof(ply_t));
    ply->obj = malloc(sizeof(obj_t));
    ply->hitbox = malloc(sizeof(hitbox_t));
    set_ply_rect(ply);
    ply->fall = false;
    ply->hit = true;
    ply->move = true;
    ply->obj->clock = sfClock_create();
    ply->obj->sprt = sfSprite_create();
    ply->obj->txtr = sfTexture_createFromFile("./asset/mob/knight.png", NULL);
    ply->obj->pos = MAP->ply_pos;
    ply->velocity = 9;
    ply->gravity = 0.9;
    ply->atk = 1;
    ply->def = 0;
    set_sprite_ply(ply);
    return ply;
}
