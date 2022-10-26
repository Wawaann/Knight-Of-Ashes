/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** main
*/

// TABLEAU de BOOL {letf, down, right}
// sur true si il peut bouger, false sinon
// tu lactualise a chaque tour de boucle en regaardant par raport au P sur la map->map

#include "../include/rpg.h"

int main(int ac, char **av)
{
    game_t *game = init_game();
    create_menu(game);
    sfMusic_play(game->music);
    sfMusic_setVolume(game->music, 100);
    while (sfRenderWindow_isOpen(WNDW->wndw)) {
        while (sfRenderWindow_pollEvent(WNDW->wndw, &WNDW->event))
            analyse_event(game);
        animate(game);
        display(game);
    }
    destroy_all(game);
    free_mem(game);
    return 0;
}
