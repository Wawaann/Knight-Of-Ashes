/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** game
*/

#include "../../include/my.h"

void scene_mn_init(game_t *game)
{
    game->scn_mn = malloc(sizeof(scene_mn_t *) * 5);
    game->scn_mn[0] = init_scene_menu(4, 1);
    game->scn_mn[1] = init_scene_menu(5, 4);
    game->scn_mn[2] = init_scene_menu(9, 4);
    game->scn_mn[3] = init_scene_menu(2, 1);
    game->scn_mn[4] =NULL;
}

void scene_gm_init(game_t *game)
{
    game->scn_gm = malloc(sizeof(scene_gm_t *) * 5);
    game->scn_gm[0] = init_scene_game(1, 1);
    game->scn_gm[1] = init_scene_game(1, 1);
    game->scn_gm[2] = init_scene_game(1, 4);
    game->scn_gm[3] = init_scene_game(2, 1);
    game->scn_gm[4] =NULL;
}

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    scene_mn_init(game);
    scene_gm_init(game);
    game->wndw = create_window();
    game->i = 0;
    game->game = false;
    return game;
}
