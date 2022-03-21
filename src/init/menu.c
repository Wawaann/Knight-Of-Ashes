/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** menu
*/

#include "../../include/my.h"

menu_t *init_menu(int btn, int mob, int txt)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->bg = malloc(sizeof(background_t));
    menu->btn = malloc(sizeof(button_t * ) * (btn + 1));
    menu->mob = malloc(sizeof(obj_t *) * (mob + 1));
    menu->txt = malloc(sizeof(text_t *) * (txt + 1));
    menu->btn[btn] = NULL;
    menu->mob[mob] = NULL;
    menu->txt[txt] = NULL;
    return menu;
}
