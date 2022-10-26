/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** macros
*/

#include "struct.h"

#ifndef MACROS_H_
    #define MACROS_H_

    #define MNU game->mnu
    #define PLY game->ply
    #define SCN game->scn
    #define INV game->inv
    #define HUD game->hud
    #define END game->end
    #define IS_GAME game->game
    #define IND game->i
    #define FIRE SCN[IND]->fire
    #define MAP SCN[IND]->map
    #define NPC SCN[1]->npc
    #define MOB SCN[IND]->mob
    #define ITEM SCN[IND]->item
    #define WNDW game->wndw
    #define V2F(x, y) (sfVector2f){x, y}
    #define INTR(w, x, y, z) (sfIntRect){w, x, y, z}
    #define FLTR(w, x, y, z) (sfFloatRect){w, x, y, z}

#endif
