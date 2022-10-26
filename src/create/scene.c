
#include "../../include/rpg.h"

void scn_one(scene_t *scn, game_t *game)
{
    char font[] = "./asset/font/Sabo.ttf";
    scn->map = create_map("./map/tuto.txt", 7, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->text[0] = create_text(font, "Use LEFT RIGHT arrows to move", 20, V2F(350, 420));
    scn->text[1] = create_text(font, "Use SPACE to jump", 25, V2F(1500, 420));
    scn->text[2] = create_text(font, "use R to roll", 25, V2F(2400, 420));
    scn->text[3] = create_text(font, "use Z or E to attack", 25, V2F(3100, 420));
    scn->text[4] = create_text(font, "use A to interact with object", 25, V2F(4350, 500));
    scn->text[5] = create_text(font, "use t to open inventory", 25, V2F(4650, 570));
    scn->text[6] = create_text(font, "light the fire and use it to continue", 25, V2F(6400, 320));
    scn->mob[0] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->item[0] = create_item("./asset/obj/d_chestplate.png", scn->map, 10, 1);
}

void scn_two(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/nexus.txt", 7, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->npc = create_npc(scn->map);
}

void scn_three(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/lvl_one.txt", 8, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->mob[0] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[1] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->mob[2] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->item[0] = create_item("./asset/obj/d_sword.png", scn->map, 10, 0);
}

void scn_four(scene_t *scn, game_t *game)
{
    scn->map = create_map("./map/lvl_two.txt", 9, 575);
    scn->bg = create_bg(scn->map->txtr, INTR(0, 0, 10240, 720));
    scn->fire = create_fire(scn->map);
    scn->mob[0] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[1] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->mob[2] = create_mob(scn->map, "./asset/mob/claw.png", 'c');
    scn->mob[3] = create_mob(scn->map, "./asset/mob/axe.png", 'a');
    scn->mob[4] = create_boss(scn->map, "./asset/mob/mboss.png", 'm');
    scn->item[0] = create_item("./asset/obj/d_sword.png", scn->map, 10, 0);
}

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
