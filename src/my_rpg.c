/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    game_t *game = init_game(av[1]);
    create_menu(game);
    create_scene(game);
    game->ply = create_player(game);
    while (sfRenderWindow_isOpen(game->wndw)) {
        while (sfRenderWindow_pollEvent(game->wndw, &game->event))
            analyse_event(game);
        display(game);
    }
    //destroy_all(game);
    free_mem(game);
    return 0;
}

// for (int i = 0; game->scn[0]->map->map[i]; i++)
//         printf("%s\n", game->scn[0]->map->map[i]);
// printf("txtr : %s\n", game->scn[0]->map->txtr);
//     printf("lvl : ");
//     for (int i = 0; game->scn[0]->map->lvl[i]; i++)
//         printf("%s ", game->scn[0]->map->lvl[i]);
//     printf("\nsize : %d\n", game->scn[0]->map->size);