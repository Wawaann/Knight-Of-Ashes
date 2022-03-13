/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** create_menu
*/

#include "../../include/my.h"

void create_scene_mn_one(scene_mn_t *scene) //menu origin
{
    scene->bg = create_bg("./asset/bg/tuto_lvl.png",(sfIntRect){0, 0, 1280, 720});
}

void create_scene_menu(game_t *game)
{
    create_scene_mn_one(game->scn_mn[0]);
}
