
#include "../../include/rpg.h"

void die(game_t *game)
{
    if (PLY->obj->pos.y >= 1280) {
        if (IND == 0) {
            PLY->obj->pos = MAP->ply_pos;
            sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
            PLY->gravity = 9;
        } else {
            IND = 1;
            PLY->obj->pos = MAP->ply_pos;
            sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
            PLY->gravity = 9;
        }
    }
}