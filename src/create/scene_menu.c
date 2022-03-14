/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** create_menu
*/

#include "../../include/my.h"

void create_scene_mn_one(scene_t *scene, char *filepath) //menu origin
{
    scene->map = create_map(filepath);
    scene->bg = create_bg(scene->map->txtr ,(sfIntRect){0, 0, 1280, 720});
}

void create_scene_menu(game_t *game)
{
    create_scene_mn_one(game->scn[0], game->filepath);
}
