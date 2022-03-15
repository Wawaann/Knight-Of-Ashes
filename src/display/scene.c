/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_menu
*/

#include "../../include/my.h"

void display_scene_menu(game_t *game)
{
    for (int i = 0; i < 5; i++) {
        sfRenderWindow_drawSprite(game->wndw, game->scn[0]->bg->sprt[i], NULL);
    }
}
