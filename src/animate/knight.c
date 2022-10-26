
#include "../../include/rpg.h"

static void anime_one(ply_t *ply)
{
    if (ply->obj->i == 0) {
        ply->hit = true;
        timer(ply->obj, 0.11, 120, 1200);
    } if (ply->obj->i == 1 || ply->obj->i == 8) {
        if (ply->obj->i == 8)
            ply->hit = false;
        else
            ply->hit = true;
        timer(ply->obj, 0.06, 120, 1200);
    } if (ply->obj->i == 2 || ply->obj->i == 3) {
        ply->hit = false;
        timer(ply->obj, 0.07, 120, 360);
    } if (ply->obj->i == 4) {
        ply->hit = false;
        timer(ply->obj, 0.06, 120, 1440);
    }
}

static void anime_two(ply_t *ply)
{
    if (ply->obj->i == 5) {
        ply->hit = false;
        timer(ply->obj, 0.09, 120, 720);
    } if (ply->obj->i == 6) {
        ply->hit = false;
        timer(ply->obj, 0.07, 120, 480);
    } if (ply->obj->i == 7) {
        ply->hit = false;
        timer(ply->obj, 0.086, 120, 600);
    }
}

void animate_knight(ply_t *ply)
{
    sfVector2f tmp = sfSprite_getScale(ply->obj->sprt);

    anime_one(ply);
    anime_two(ply);
    sfSprite_setTextureRect(ply->obj->sprt, ply->obj->rect[ply->obj->i]);
    if (tmp.x < 0) {
        ply->hitbox->rect = FLTR(ply->obj->pos.x - 10, ply->obj->pos.y - 85.5, 47.25, 86);
        ply->h_atk = FLTR(ply->obj->pos.x - 105, ply->obj->pos.y - 85.5, 90, 86);
    } else {
        ply->hitbox->rect = FLTR(ply->obj->pos.x - 36, ply->obj->pos.y - 85.5, 47.25, 86);
        ply->h_atk = FLTR(ply->obj->pos.x + 15, ply->obj->pos.y - 85.5, 90, 86);
    }
}
