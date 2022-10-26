
#include "../include/rpg.h"

static void destroy_obj(obj_t *obj)
{
    sfSprite_destroy(obj->sprt);
    sfTexture_destroy(obj->txtr);
    sfClock_destroy(obj->clock);
}

static void destroy_mnu(menu_t **mnu)
{
    for (int i = 0; mnu[i]; i++) {
        for (int j = 0; mnu[i]->btn[j]; j++) {
            sfSprite_destroy(mnu[i]->btn[j]->sprt);
            sfTexture_destroy(mnu[i]->btn[j]->txtr);
        }
        for (int j = 0; mnu[i]->sound[j]; j++) {
            sfSound_stop(mnu[i]->sound[j]);
            sfSound_destroy(mnu[i]->sound[j]);
        }
        for (int j = 0; mnu[i]->txt[j]; j++) {
            sfText_destroy(mnu[i]->txt[j]->text);
            sfFont_destroy(mnu[i]->txt[j]->font);
        }
    }
}

static void destroy_scn(scene_t **scn)
{
    for (int i = 0; scn[i]; i++) {
        for (int j = 0; j < 5; j++) {
            sfSprite_destroy(scn[i]->bg->sprt[j]);
            sfTexture_destroy(scn[i]->bg->txtr[j]);
        }
    }
}

static void destroy_wndw(wndw_t *wndw)
{
    sfView_destroy(wndw->view);
    sfRenderWindow_destroy(wndw->wndw);
}

void destroy_all(game_t *game)
{
    if (IS_GAME) {
        destroy_obj(PLY->obj);
        destroy_scn(SCN);
    }
    sfMusic_stop(game->music);
    sfMusic_destroy(game->music);
    destroy_mnu(MNU);
    destroy_wndw(WNDW);
}
