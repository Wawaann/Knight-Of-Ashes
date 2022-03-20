/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_menu
*/

#include "../../include/my.h"

scene_t *init_scene(int fire, int mobs)
{
    scene_t *scene = malloc(sizeof(scene_t));
    scene->bg = malloc(sizeof(background_t));
    scene->fire = malloc(sizeof(obj_t *) * (fire + 1));
    scene->fire[fire] = NULL;
    return scene;
}
