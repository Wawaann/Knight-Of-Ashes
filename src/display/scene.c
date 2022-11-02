
#include "../../include/rpg.h"

static void display_hud(game_t *game)
{
    // for (int i = 0; i < 5; i++)
    //     sfRenderWindow_drawSprite(WNDW->wndw, HUD->heart[i]->sprt, NULL);
    // for (int i = 0; i < 5; i++)
    //     sfRenderWindow_drawSprite(WNDW->wndw, HUD->stamina[i]->sprt, NULL);
    sfRenderWindow_drawSprite(WNDW->wndw, HUD->hud->sprt, NULL);
}

void display_inv(game_t *game)
{
    if (INV->display) {
        sfSprite_setPosition(INV->sprt, INV->pos);
        sfRenderWindow_drawSprite(WNDW->wndw, INV->sprt, NULL);
        for (int i = 0; INV->item[i]; i++)
            if (INV->item[i]->display) {
                sfSprite_setPosition(INV->item[i]->sprt, INV->item[i]->pos);
                sfRenderWindow_drawSprite(WNDW->wndw, INV->item[i]->sprt, NULL);
            }
    }
}

void display_scene(game_t *game)
{
    for (int i = 0; i < 6; i++)
        sfRenderWindow_drawSprite(WNDW->wndw, SCN[IND]->bg->sprt[i], NULL);
    for (int i = 0; SCN[IND]->mob[i]; i++)
        sfRenderWindow_drawSprite(WNDW->wndw, MOB[i]->obj->sprt, NULL);
    for (int i = 0; SCN[IND]->text[i]; i++)
        sfRenderWindow_drawText(WNDW->wndw, SCN[IND]->text[i]->text, NULL);
    for (int i = 0; SCN[IND]->item[i] && SCN[IND]->item[i]->display; i++)
        sfRenderWindow_drawSprite(WNDW->wndw, ITEM[i]->obj->sprt, NULL);
    display_hud(game);
    if (IND == 1) {
        sfRenderWindow_drawSprite(WNDW->wndw, SCN[IND]->npc->obj->sprt, NULL);
    }
    sfRenderWindow_drawSprite(WNDW->wndw, SCN[IND]->fire->obj->sprt, NULL);
    sfRenderWindow_drawSprite(WNDW->wndw, PLY->obj->sprt, NULL);
    display_inv(game);
}
