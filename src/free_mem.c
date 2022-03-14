/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** free_mem
*/

#include "../include/my.h"

void free_scnu(scene_t **scene)
{
    for (int i = 0; scene[i]; i++) {
        free(scene[i]->bg->rect);
        free(scene[i]->bg->sprt);
        free(scene[i]->bg->txtr);
        free(scene[i]->bg);
        free(scene[i]);
    }
    free(scene);
}

void free_mem(game_t *game)
{
    free_scnu(game->scn);
    free(game);
}
