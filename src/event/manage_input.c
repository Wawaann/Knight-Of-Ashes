/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** manage_input
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

void manage_input_pressed(sfRenderWindow *wndw, sfEvent event, game_t *game)
{
    if (event.key.code == sfKeyRight) {
        game->ply->rect->left = 0;
        game->ply->i = 1;
        sfSprite_setScale(game->ply->sprt, (sfVector2f){2.55, 2.55});
        move_right(game->scn[0], game->scn[0]->map->size - 1);
    } if (event.key.code == sfKeyLeft) {
        game->ply->rect->left = 0;
        game->ply->i = 1;
        sfSprite_setScale(game->ply->sprt, (sfVector2f){-2.55, 2.55});
        move_left(game->scn[0]);
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