/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** free_mem
*/

#include "../include/my.h"

void free_map(scene_t *scene)
{
    for (int i = 0; scene->map->lvl[i]; i++)
        free(scene->map->lvl[i]);
    for (int i = 0; scene->map->map[i]; i++)
        free(scene->map->map[i]);
    free(scene->map->lvl);
    free(scene->map->map);
    free(scene->map->txtr);
    free(scene->map);
}

void free_scnu(scene_t **scene)
{
    for (int i = 0; scene[i]; i++) {
        free_map(scene[0]);
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
