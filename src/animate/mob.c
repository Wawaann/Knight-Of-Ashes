
#include "../../include/rpg.h"

void animate_mob(game_t *game)
{
    for (int i = 0; MOB[i]; i++) {
        if (MOB[i]->obj->i >= 0 && MOB[i]->obj->i <= 2) {
            timer(MOB[i]->obj, 0.1, 100, 600);
            MOB[i]->hit = true;
        } if (MOB[i]->obj->i == 3 || MOB[i]->obj->i == 4) {
            timer(MOB[i]->obj, 0.1, 100, 600);
            MOB[i]->hit = false;
        } if (MOB[i]->obj->i == 5) {
            timer(MOB[i]->obj, 0.1, 100, 300);
            MOB[i]->hit = false;
        } if (MOB[i]->obj->i == 6) {
            timer(MOB[i]->obj, 0.1, 100, 400);
            MOB[i]->hit = false;
        }
        sfSprite_setTextureRect(MOB[i]->obj->sprt, MOB[i]->obj->rect[MOB[i]->obj->i]);
    }
}
