
#include "../../include/rpg.h"

void speed_atk(game_t *game)
{
    for (int i = 0; MOB[i]; i++) {
        if (sfFloatRect_intersects(&MOB[i]->hitbox->rect, &PLY->h_atk, NULL)) {
            MOB[i]->life -= PLY->atk;
            MOB[i]->obj->i = 5;
        }
    }
}
