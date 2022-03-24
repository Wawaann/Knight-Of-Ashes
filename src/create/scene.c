/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** create_menu
*/

#include "../../include/my.h"

void create_scn_one(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/tuto.txt");
    scn->bg = create_bg(scn->map->txtr ,(sfIntRect){1040, 0, 1280, 720});
}

void create_scn_two(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/nexus.txt");
    scn->bg = create_bg(scn->map->txtr, (sfIntRect){0, 0, 1280, 720});
}

void create_scene(game_t *game)
{
    create_scn_one(game->scn[0], game);
    create_scn_two(game->scn[1], game);
}
