/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** manage_input
*/

#include "../../include/my.h"

void manage_input_pressed(sfRenderWindow *wndw, sfEvent event, game_t *game)
{
    if (event.key.code == sfKeyRight) {
        game->ply->rect->left = 0;
        game->ply->i = 1;
        sfSprite_setScale(game->ply->sprt, (sfVector2f){2.55, 2.55});
        move(game, 1);
    } if (event.key.code == sfKeyLeft) {
        game->ply->rect->left = 0;
        game->ply->i = 1;
        sfSprite_setScale(game->ply->sprt, (sfVector2f){-2.55, 2.55});
        move(game, 2);
    }
}

void manage_input_released(sfRenderWindow *wndw, sfEvent event, game_t *game)
{
    if (event.key.code == sfKeySpace) {
        game->ply->rect->left = 0;
        game->ply->i = 2;
    } else if (event.key.code == sfKeyR) {
        game->ply->rect->left = 0;
        game->ply->i = 4;
    } else if (event.key.code == sfKeyE) {
        game->ply->rect->left = 0;
        game->ply->i = 5;
    } else if (event.key.code == sfKeyZ) {
        game->ply->rect->left = 0;
        game->ply->i = 6;
    }  else if (event.key.code == sfKeyH) {
        game->ply->rect->left = 0;
        game->ply->i = 7;
    } else {
        game->ply->rect->left = 0;
        game->ply->i = 0;
    }
}