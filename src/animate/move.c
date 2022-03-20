/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** move
*/

#include "../../include/my.h"

void move_right(scene_t *scn, int size)
{    
    for (int i = 0; i < 5; i++) {
        if (scn->bg->rect[4].left + i * 4 > size * 65)
            scn->bg->rect[4].left = size * 65;
        else
            scn->bg->rect[i].left += i * 4;
        sfSprite_setTextureRect(scn->bg->sprt[i], scn->bg->rect[i]);
    }
}

void move_left(scene_t *scn)
{
    for (int i = 0; i < 5; i++) {
        if (scn->bg->rect[i].left - i * 4 < 0)
            scn->bg->rect[i].left = 0;
        else
            scn->bg->rect[i].left -= i * 4;
        sfSprite_setTextureRect(scn->bg->sprt[i], scn->bg->rect[i]);
    }
}

void move_map(scene_t *scn, int move)
{
    if (move == 1)
        move_right(scn, scn->map->size);
    else
        move_left(scn);
}

void move(game_t *game, int move)
{
    if (move == 1) {
        if (game->ply->obj->pos.x >= 650 && game->scn[0]->bg->rect[4].left < game->scn[0]->map->size * 65)
            move_right(game->scn[0], game->scn[0]->map->size);
        else
            game->ply->obj->pos.x += 16;
            
    } if (move == 2) {
        if (game->ply->obj->pos.x <= 550 && game->scn[0]->bg->rect[4].left > 0)
            move_left(game->scn[0]);
        else if (game->ply->obj->pos.x - 16 > 0)
            game->ply->obj->pos.x -= 16;
    }
}
