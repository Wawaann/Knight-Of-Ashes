/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** move
*/

#include "../../include/rpg.h"

void move_right(scene_t *scn, wndw_t *wndw)
{
    scn->bg->rect[0].left -= 8;
    scn->bg->rect[1].left -= 8;
    scn->bg->rect[2].left -= 6;
    scn->bg->rect[3].left -= 4;
    scn->bg->rect[4].left -= 2;
    for (int i = 0; i < 5; i++) {
        sfSprite_setTextureRect(scn->bg->sprt[i], scn->bg->rect[i]);
    }
}

void move_left(scene_t *scn, wndw_t *wndw)
{
    scn->bg->rect[0].left += 8;
    scn->bg->rect[1].left += 8;
    scn->bg->rect[2].left += 6;
    scn->bg->rect[3].left += 4;
    scn->bg->rect[4].left += 2;
    for (int i = 0; i < 5; i++)
        sfSprite_setTextureRect(scn->bg->sprt[i], scn->bg->rect[i]);
}

static void move_hud(game_t *game, bool neg)
{
    for (int i = 0; i < 5; i++) {
        HUD->heart[i]->pos.x += neg ? -8 : 8;
        HUD->stamina[i]->pos.x += neg ? -8 : 8;
        sfSprite_setPosition(HUD->heart[i]->sprt, HUD->heart[i]->pos);
        sfSprite_setPosition(HUD->stamina[i]->sprt, HUD->stamina[i]->pos);
    }
}

void move(game_t *game, int move, int i)
{
    if (move == 1 && PLY->move) {
        move_right(SCN[i], WNDW);
        PLY->obj->pos.x += 8;
        INV->pos.x += 8;
        move_hud(game, false);
        for (int i = 0; INV->item[i]; i++)
            INV->item[i]->pos.x += 8;
    } if (move == 2 && PLY->move) {
        move_left(SCN[i], WNDW);
        PLY->obj->pos.x -= 8;
        INV->pos.x -= 8;
        move_hud(game, true);
        for (int i = 0; INV->item[i]; i++)
            INV->item[i]->pos.x -= 8;
    }
    sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
}
