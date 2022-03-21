/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** all
*/

#include "../../include/my.h"

void display(game_t *game)
{
    sfRenderWindow_clear(game->wndw, sfBlack);
    if (!game->game) {
        display_menu(game);
    } else {
        display_scene(game);
        sfRenderWindow_drawSprite(game->wndw, game->ply->obj->sprt, NULL);
    }
    sfRenderWindow_display(game->wndw);
}
