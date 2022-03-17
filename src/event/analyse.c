/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** analyse
*/

#include "../../include/my.h"

void analyse_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->wndw);
    if (game->event.type == sfEvtKeyPressed && game->ply->i < 2)
        manage_input_pressed(game->wndw, game->event, game);
    if (game->event.type == sfEvtKeyReleased && game->ply->i < 2)
        manage_input_released(game->wndw, game->event, game);
}
