/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** manage_input
*/

#include "../../include/rpg.h"

void manage_input_released(sfRenderWindow *wndw, sfEvent event, game_t *game)
{
    if (event.key.code == sfKeyT)
        INV->display = !INV->display;
    if (event.key.code == sfKeySpace) {
        PLY->obj->i = 2;
    } else if (event.key.code == sfKeyR) {
        PLY->obj->i = 4;
    } else if (event.key.code == sfKeyE) {
        PLY->obj->i = 5;
        heavy_atk(game);
    } else if (event.key.code == sfKeyZ) {
        PLY->obj->i = 6;
        speed_atk(game);
    }  else if (event.key.code == sfKeyH) {
        PLY->obj->i = 7;
    } else {
        PLY->obj->i = 0;
    } if (event.key.code == sfKeyA)
        actions_handler(game);
    if (event.key.code == sfKeyDown) {
        IND = (IND + 1) % 6;
        PLY->obj->pos = SCN[IND]->map->ply_pos;
        sfSprite_setPosition(PLY->obj->sprt, PLY->obj->pos);
        sfView_setCenter(WNDW->view, V2F(PLY->obj->pos.x, 360));
    } if (event.key.code == sfKeyUp)
        printf("pos.x: %f; pos.y: %f\n", PLY->obj->pos.x, PLY->obj->pos.y);
}
