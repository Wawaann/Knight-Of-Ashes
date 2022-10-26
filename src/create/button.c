/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** button
*/

#include "../../include/rpg.h"

button_t *create_btn(char *path, sfIntRect rect)
{
    button_t *btn = malloc(sizeof(button_t));
    btn->sprt = sfSprite_create();
    btn->txtr = sfTexture_createFromFile(path, NULL);
    btn->rect = rect;
    btn->i = 0;
    return btn;
}

void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl)
{
    btn->pos = (sfVector2f)pos;
    sfSprite_setTexture(btn->sprt, btn->txtr, sfFalse);
    sfSprite_setPosition(btn->sprt, btn->pos);
    sfSprite_setScale(btn->sprt, (sfVector2f)scl);
    sfFloatRect rect = sfSprite_getLocalBounds(btn->sprt);
    sfSprite_setOrigin(btn->sprt, V2F(rect.width / 2, rect.height / 2));
    sfSprite_setTextureRect(btn->sprt, btn->rect);
}
