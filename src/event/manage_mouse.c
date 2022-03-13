/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** manage_mouse
*/

#include "../../include/my.h"

void manage_mouse_click(game_t *game, sfMouseButtonEvent mouse)
{
    if (!game->game) {
        void(*t_ptrf[])(game_t *game, sfMouseButtonEvent mouse) = {
            manage_scnmn_one, manage_scnmn_two,
            manage_scnmn_tree, manage_scnmn_four
        };
        t_ptrf[game->i](game, mouse);
    }
}
