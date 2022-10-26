/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** view
*/

#include "../../include/rpg.h"

sfView *create_view(sfFloatRect rect)
{
    sfView *view = sfView_createFromRect(rect);
    return view;
}
