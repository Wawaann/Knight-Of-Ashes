/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** scene_two
*/


#include "../../include/rpg.h"

void scn_five(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/lvl_three.txt", 9, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->mob[0] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->mob[1] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[2] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[3] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
}

void scn_six(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/lvl_four.txt", 9, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->mob[0] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[1] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->mob[2] = create_boss(scn->map, "./asset/mob/boss.png", 'B');
}

void create_scene(game_t *game)
{
    scn_one(SCN[0], game);
    scn_two(SCN[1], game);
    scn_three(SCN[2], game);
    scn_four(SCN[3], game);
    scn_five(SCN[4], game);
    scn_six(SCN[5], game);
}
