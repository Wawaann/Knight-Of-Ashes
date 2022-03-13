/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    game_t *game = init_game();
    create_scene_menu(game);
    while (sfRenderWindow_isOpen(game->wndw)) {
        while (sfRenderWindow_pollEvent(game->wndw, &game->event))
            analyse_event(game);
        display(game);
    }
    //destroy_all(game);
    //free_mem(game);
    return 0;
}
