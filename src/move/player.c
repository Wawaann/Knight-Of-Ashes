
#include "../../include/rpg.h"

float on_floor(game_t *game)
{
    sfFloatRect rect;
    for (int i = 0; MAP->hitbox[i]; i++) {
        if (sfFloatRect_intersects(&MAP->hitbox[i]->rect, &PLY->hitbox->rect, &rect)) {
            return MAP->hitbox[i]->y;
        }
    }
    return -1;
}

void move_player(game_t *game)
{
    float y = on_floor(game);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && PLY->obj->i < 5 && IS_GAME) {
        if (PLY->obj->i < 2)
            PLY->obj->i = 1;
        if (player_can_move(PLY, SCN[IND]->map, 2)) {
            sfSprite_setScale(PLY->obj->sprt, V2F(-2.25, 2.25));
            move(game, 2, game->i);
        }
    } if (sfKeyboard_isKeyPressed(sfKeyRight) &&  PLY->obj->i < 5 && IS_GAME) {
        if (PLY->obj->i < 2)
            PLY->obj->i = 1;
        if (player_can_move(PLY, SCN[IND]->map, 1)) {
            sfSprite_setScale(game->ply->obj->sprt, V2F(2.25, 2.25));
            move(game, 1, game->i);
        }
    } if (PLY->obj->i == 3 || (y == -1 && PLY->obj->i != 2)) {
        if (PLY->fall == 0) {
            PLY->gravity = 9;
            PLY->fall = 1;
            PLY->obj->i = 3;
        }
        fall(game, y);
    }
    sfSprite_setPosition(PLY->obj->sprt, PLY->obj->pos);
}

void jump(ply_t *ply)
{
    ply->fall = 1;
    ply->obj->pos.y -= ply->velocity - ply->gravity;
    if (ply->gravity <= ply->velocity)
        ply->gravity *= 1.1;
    else
        ply->obj->i = 3;
}

void fall(game_t *game, float y)
{
    PLY->obj->pos.y -= PLY->velocity - PLY->gravity;
    PLY->gravity *= 1.07;
    if (PLY->obj->pos.y <= y)
        PLY->obj->pos.y = y;
    if (y != -1) {
        PLY->obj->i = 0;
        PLY->velocity = 9;
        PLY->gravity = 0.9;
        PLY->obj->pos.y = y;
        PLY->fall = 0;
    }
    die(game);
}
