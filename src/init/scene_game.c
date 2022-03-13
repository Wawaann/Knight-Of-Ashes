/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_game
*/

#include "../../include/my.h"

scene_gm_t *init_scene_game(int btn, int txt)
{
    scene_gm_t *scene = malloc(sizeof(scene_gm_t));
    scene->bg = malloc(sizeof(background_t));
    scene->btn = malloc(sizeof(button_t *) * (btn + 1));
    scene->btn[btn] = NULL;
    scene->text = malloc(sizeof(text_t *) * (txt + 1));
    scene->text[txt] = NULL;
    return scene;
}
