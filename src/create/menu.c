/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** menu
*/

#include "../../include/my.h"

void create_menu_one(menu_t *mnu)
{
    mnu->bg = create_bg("./asset/bg/menu.png", (sfIntRect){0, 0, 1280, 720});
    mnu->btn[0] = create_btn("./asset/obj/souls.png", (sfIntRect){0, 0, 400, 80});
    set_btn(mnu->btn[0], (sfVector2f){640, 360}, (sfVector2f){0.6, 0.6});
    mnu->txt[0] = create_text("DARK SOULS", 50, (sfVector2f){640, 70});
}

void create_menu(game_t *game)
{
    create_menu_one(game->mnu[0]);
}
