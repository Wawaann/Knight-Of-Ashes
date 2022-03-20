/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** game
*/

#include "../../include/my.h"

void scene_mn_init(game_t *game)
{
    game->scn = malloc(sizeof(scene_t *) * 2);
    game->scn[0] = init_scene(2, 4);
    game->scn[1] = NULL;
}

game_t *init_game(char *filepath)
{
    game_t *game = malloc(sizeof(game_t));
    scene_mn_init(game);
    game->filepath = filepath;
    game->wndw = create_window();
    game->i = 0;
    game->game = false;
    return game;
}
