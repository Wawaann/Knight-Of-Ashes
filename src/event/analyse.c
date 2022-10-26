
#include "../../include/rpg.h"

void analyse_event(game_t *game)
{
    if (WNDW->event.type == sfEvtClosed)
        sfRenderWindow_close(WNDW->wndw);
    if (IS_GAME) {
        if (WNDW->event.type == sfEvtKeyReleased && PLY->obj->i < 2)
            manage_input_released(WNDW->wndw, WNDW->event, game);
    } else {
        if (WNDW->event.type == sfEvtKeyPressed && !IS_GAME)
            manage_menu(WNDW->wndw, WNDW->event, game);
    }
}
