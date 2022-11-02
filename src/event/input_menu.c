
#include "../../include/rpg.h"

void mv_btn_one(menu_t *mnu, int move)
{
    if (mnu->btn[1]->i + move < 0)
        mnu->btn[1]->i = 2;
    else
        mnu->btn[1]->i = (mnu->btn[1]->i + move) % 3;
    if (mnu->btn[1]->i == PLAY)
        mnu->btn[1]->pos = V2F(640, 409);
    if (mnu->btn[1]->i == SETTINGS)
        mnu->btn[1]->pos = V2F(640, 459);
    if (mnu->btn[1]->i == QUIT)
        mnu->btn[1]->pos = V2F(640, 509);
    sfSprite_setPosition(mnu->btn[1]->sprt, mnu->btn[1]->pos);
}

void mv_btn_two(menu_t *mnu, int move)
{
    if (mnu->btn[0]->i + move < 0)
        mnu->btn[0]->i = 4;
    else
        mnu->btn[0]->i = (mnu->btn[0]->i + move) % 5;
    if (mnu->btn[0]->i == MODE)
        mnu->btn[0]->pos = V2F(740, 309);
    if (mnu->btn[0]->i == SCREEN)
        mnu->btn[0]->pos = V2F(740, 359);
    if (mnu->btn[0]->i == MUSIC)
        mnu->btn[0]->pos = V2F(740, 409);
    if (mnu->btn[0]->i == BACK)
        mnu->btn[0]->pos = V2F(640, 609);
    if (mnu->btn[0]->i == QUIT_SET)
        mnu->btn[0]->pos = V2F(640, 659);
    sfSprite_setPosition(mnu->btn[0]->sprt, mnu->btn[0]->pos);
}

void mn_mnu_one(game_t *game)
{
    if (MNU[IND]->btn[1]->i == QUIT)
        sfRenderWindow_close(WNDW->wndw);
    if (MNU[IND]->btn[1]->i == PLAY) {
        sfSound_play(MNU[IND]->sound[2]);
        game->game = true;
        IND = 0;
        create_scene(game);
        PLY = create_player(game);
        sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
        HUD = create_hud(game);
        return;
    } if (MNU[IND]->btn[1]->i == SETTINGS) {
        sfSound_play(MNU[IND]->sound[0]);
        IND = 1;
    }
}

void mn_mnu_two(game_t *game)
{
    sfSound_play(MNU[IND]->sound[0]);
    if (MNU[IND]->btn[0]->i == MODE) {
        if (game->eric) {
            game->eric = false;
            sfText_setString(MNU[IND]->txt[2]->text, "no");
        } else {
            game->eric = true;
            sfText_setString(MNU[IND]->txt[2]->text, "yes");
        }
    } if (MNU[IND]->btn[0]->i == SCREEN) {
        if (sfRenderWindow_getSize(WNDW->wndw).x == 1280) {
            sfRenderWindow_setSize(WNDW->wndw, (sfVector2u){1920, 1080});
            sfRenderWindow_setPosition(WNDW->wndw, (sfVector2i){0, 0});
            sfText_setString(MNU[IND]->txt[4]->text, "yes");
        } else {
            sfRenderWindow_setSize(WNDW->wndw, (sfVector2u){1280, 720});
            sfRenderWindow_setPosition(WNDW->wndw, (sfVector2i){0, 0});
            sfText_setString(MNU[IND]->txt[4]->text, "no");
        }
    } if (MNU[IND]->btn[0]->i == MUSIC) {
        if (sfMusic_getStatus(game->music) == sfPlaying) {
            sfMusic_pause(game->music);
            sfText_setString(MNU[IND]->txt[6]->text, "no");
        } else {
            sfMusic_play(game->music);
            sfText_setString(MNU[IND]->txt[6]->text, "yes");
        }
    } if (MNU[IND]->btn[0]->i == BACK)
        IND = 0;
    if (MNU[IND]->btn[0]->i == QUIT_SET)
        sfRenderWindow_close(WNDW->wndw);
}

void manage_menu(sfRenderWindow *wndw, sfEvent event, game_t *game)
{
    void(*t_mv_btn[])(menu_t *mnu, int move) = {mv_btn_one, mv_btn_two};
    void(*t_mnu[])(game_t *game) = {mn_mnu_one, mn_mnu_two};
    if (event.key.code == sfKeyUp) {
        sfSound_play(MNU[IND]->sound[1]);
        t_mv_btn[IND](MNU[IND], -1);
    } if (event.key.code == sfKeyDown) {
        sfSound_play(MNU[IND]->sound[1]);
        t_mv_btn[IND](MNU[IND], 1);
    } if (event.key.code == sfKeyEnter) {
        t_mnu[IND](game);
    }
}
