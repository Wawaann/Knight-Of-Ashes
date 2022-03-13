/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_menu
*/

#include "../../include/my.h"

scene_mn_t *init_scene_menu(int btn, int txt)
{
    scene_mn_t *scene = malloc(sizeof(scene_mn_t));
    scene->bg = malloc(sizeof(background_t));
    scene->btn = malloc(sizeof(button_t *) * (btn + 1));
    scene->btn[btn] = NULL;
    scene->text = malloc(sizeof(text_t *) * (txt + 1));
    scene->text[txt] = NULL;
    return scene;
}
