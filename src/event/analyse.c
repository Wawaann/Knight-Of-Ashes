/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** analyse
*/

#include "../../include/my.h"

void move_right(scene_t *scn, int size)
{    
    for (int i = 0; i < 5; i++) {
        if (scn->bg->rect[4].left + i * 4 > size * 52)
            scn->bg->rect[4].left = size * 52;
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

void analyse_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->wndw);
    // if (game->event.type == sfEvtMouseButtonPressed)
    //     manage_mouse_click(game, game->event.mouseButton);
    if (game->event.type == sfEvtKeyPressed && game->event.key.code == sfKeyRight)
        move_right(game->scn[0], game->scn[0]->map->size - 1);
    if (game->event.type == sfEvtKeyPressed && game->event.key.code == sfKeyLeft)
        move_left(game->scn[0]);
}
