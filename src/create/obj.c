/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** obj
*/

#include "../../include/my.h"

obj_t *create_obj(char *asset, sfIntRect rect, sfVector2f pos, sfVector2f scl)
{
    obj_t *obj = malloc(sizeof(obj_t));
    obj->sprt = sfSprite_create();
    obj->txtr = sfTexture_createFromFile(asset, &rect);
    obj->rect = rect;
    obj->pos = pos;
    sfSprite_setTexture(obj->sprt, obj->txtr, sfFalse);
    sfSprite_setPosition(obj->sprt, obj->pos);
    sfSprite_setScale(obj->sprt, scl);
    return obj;
}
