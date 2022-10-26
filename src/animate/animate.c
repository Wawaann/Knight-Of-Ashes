/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** animate
*/

#include "../../include/rpg.h"

void animate_bg(game_t *game)
{
    if (SCN[IND]->bg->pos[0].x >= 8960)
        SCN[IND]->bg->pos[0].x = -8960;
    SCN[IND]->bg->pos[0].x += 0.2;
    if (SCN[IND]->bg->pos[1].x >= 8960)
        SCN[IND]->bg->pos[1].x = -8960;
    SCN[IND]->bg->pos[1].x += 0.2;
    sfSprite_setPosition(SCN[IND]->bg->sprt[0], SCN[IND]->bg->pos[0]);
    sfSprite_setPosition(SCN[IND]->bg->sprt[1], SCN[IND]->bg->pos[1]);
}

void animate_obj(game_t *game)
{
    if (FIRE->obj->i > 0) {
        timer(FIRE->obj, 0.1, 32, 128);
        sfSprite_setTextureRect(FIRE->obj->sprt, FIRE->obj->rect[FIRE->obj->i]);
    } if (IND == 1) {
        timer(SCN[IND]->npc->obj, 0.5, 180, 360);
        sfSprite_setTextureRect(SCN[IND]->npc->obj->sprt, SCN[IND]->npc->obj->rect[0]);
    }
}

void animate(game_t *game)
{
    if (IS_GAME) {
        if (PLY->obj->i == 2)
            jump(PLY);
        move_player(game);
        animate_knight(game->ply);
        animate_bg(game);
        animate_obj(game);
        animate_mob(game);
    }
}
