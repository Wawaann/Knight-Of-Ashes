/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** game
*/

#include "../../include/rpg.h"

void scene(game_t *game)
{
    SCN = malloc(sizeof(scene_t *) * 7);
    SCN[0] = init_scene(0, 1, 7, 1);
    SCN[1] = init_scene(1, 0, 0, 0);
    SCN[2] = init_scene(0, 3, 0, 0);
    SCN[3] = init_scene(0, 5, 0, 1);
    SCN[4] = init_scene(0, 4, 0, 0);
    SCN[5] = init_scene(0, 3, 0, 0);
    SCN[6] = NULL;
}

void menu(game_t *game)
{
    MNU = malloc(sizeof(menu_t *) * 3);
    MNU[0] = init_menu(2, 3);
    MNU[1] = init_menu(1, 9);
    MNU[2] = NULL;
}

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    scene(game);
    menu(game);
    inventory(game);
    game->wndw = create_window();
    game->i = 0;
    game->game = false;
    game->eric = false;
    game->is_end = false;
    game->music = sfMusic_createFromFile("./asset/music/main.ogg");
    return game;
}
