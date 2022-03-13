/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** analyse
*/

#include "../../include/my.h"

void move_right(background_t *bg)
{    
    my_printf("rect.left = %d\n", bg->rect[4].left);
    for (int i = 0; i < 5; i++) {
        if (bg->rect[4].left + i * 2.4 > 4200)
            bg->rect[4].left = 4200;
        else
            bg->rect[i].left += i * 2.4;
        sfSprite_setTextureRect(bg->sprt[i], bg->rect[i]);
    }
}

void move_left(background_t *bg)
{
    for (int i = 0; i < 5; i++) {
        if (bg->rect[i].left - i * 2.4 < 0)
            bg->rect[i].left = 0;
        else
            bg->rect[i].left -= i * 2.4;
        sfSprite_setTextureRect(bg->sprt[i], bg->rect[i]);
    }
}

void analyse_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->wndw);
    if (game->event.type == sfEvtMouseButtonPressed)
        manage_mouse_click(game, game->event.mouseButton);
    if (game->event.type == sfEvtKeyPressed && game->event.key.code == sfKeyRight)
        move_right(game->scn[0]->bg);
    if (game->event.type == sfEvtKeyPressed && game->event.key.code == sfKeyLeft)
        move_left(game->scn[0]->bg);
}
