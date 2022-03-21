/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** menu
*/

#include "../../include/my.h"

void display_menu(game_t *game)
{
    for (int i = 0; i < 5; i++)
        sfRenderWindow_drawSprite(game->wndw, game->mnu[game->i]->bg->sprt[i], NULL);
    for (int i = 0; game->mnu[game->i]->btn[i]; i++)
        sfRenderWindow_drawSprite(game->wndw, game->mnu[game->i]->btn[i]->sprt, NULL);
    for (int i = 0; game->mnu[game->i]->mob[i]; i++)
        sfRenderWindow_drawSprite(game->wndw, game->mnu[game->i]->mob[i]->sprt, NULL);
    for (int i = 0; game->mnu[game->i]->txt[i]; i++)
        sfRenderWindow_drawText(game->wndw, game->mnu[game->i]->txt[i]->text, NULL);
}
