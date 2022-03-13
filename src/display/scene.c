/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_menu
*/

#include "../../include/my.h"

void display_scene_menu(game_t *game)
{
    sfRenderWindow_clear(game->wndw, sfBlack);
    for (int i = 0; i < 5; i++) {
        sfRenderWindow_drawSprite(game->wndw, game->scn[0]->bg->sprt[i], NULL);
    }
}

void display(game_t *game)
{
    display_scene_menu(game);
    sfRenderWindow_display(game->wndw);
}