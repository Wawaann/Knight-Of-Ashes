/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** text
*/

#include "../../include/rpg.h"

text_t *create_text(char *font, char *str, int size, sfVector2f pos)
{
    text_t *txt = malloc(sizeof(text_t));
    txt->text = sfText_create();
    txt->font = sfFont_createFromFile(font);
    txt->str = str;
    sfText_setFont(txt->text, txt->font);
    sfText_setString(txt->text, txt->str);
    sfText_setCharacterSize(txt->text, size);
    sfText_setColor(txt->text, sfWhite);
    sfText_setOutlineThickness(txt->text, 2);
    sfText_setOutlineColor(txt->text, sfBlack);
    txt->pos = pos;
    sfText_setPosition(txt->text, (sfVector2f)pos);
    sfFloatRect rect = sfText_getLocalBounds(txt->text);
    sfText_setOrigin(txt->text, V2F(rect.width / 2, rect.height / 2));
    return txt;
}
