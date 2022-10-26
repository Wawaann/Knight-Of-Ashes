
#include "../../include/rpg.h"

static void manage_end(game_t *game)
{
    game->end = create_end(game);
    sfMusic_stop(game->music);
    sfMusic_destroy(game->music);
    game->music = sfMusic_createFromFile("./asset/music/end.ogg");
    sfMusic_play(game->music);
    game->is_end = true;
}


void reset_pos(game_t *game)
{
    PLY->obj->pos = SCN[IND]->map->ply_pos;
    sfSprite_setPosition(PLY->obj->sprt, PLY->obj->pos);
    INV->pos = V2F(80, 320);
    INV->item[0]->pos = V2F(-158, 445);
    INV->item[1]->pos = V2F(-98, 445);
    sfSprite_setPosition(INV->item[0]->sprt, INV->item[0]->pos);
    sfSprite_setPosition(INV->item[1]->sprt, INV->item[1]->pos);
    for (int i = 0; i < 5; i++) {
        HUD->heart[i]->pos = V2F((0 + (i * 17)) * 3, 50);
        sfSprite_setPosition(HUD->heart[i]->sprt, HUD->heart[i]->pos);
        HUD->stamina[i]->pos = V2F((0 + (i * 17)) * 3, 100);
        sfSprite_setPosition(HUD->stamina[i]->sprt, HUD->stamina[i]->pos);
    }
    sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
}

void fire_gestion(game_t *game)
{
    if (FIRE->obj->i == 0) {
        FIRE->obj->i = 1;
    } else if (FIRE->obj->i == 1) {
        IND = my_getnbr(MAP->lvl[MAP->nb_lvl - 1]);
        if (IND == 0)
            manage_end(game);
        reset_pos(game);
    }
}

void item_gestion(game_t *game, int i)
{
    if (INV->item[i]->display)
        INV->item[i + 1]->display = true;
    INV->item[i]->display = true;
    SCN[IND]->item[i]->display = false;
    PLY->atk += SCN[IND]->item[i]->attack;
    PLY->def += SCN[IND]->item[i]->defense;
}

void actions_handler(game_t *game)
{
    if (sfFloatRect_intersects(&PLY->hitbox->rect, &FIRE->hitbox->rect, NULL))
        fire_gestion(game);
    for (int i = 0; SCN[IND]->item[i]; i++)
        if (sfFloatRect_intersects(&PLY->hitbox->rect, &SCN[IND]->item[i]->hitbox->rect, NULL))
            item_gestion(game, i);
}
