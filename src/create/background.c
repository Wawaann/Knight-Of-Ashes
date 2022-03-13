/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** background
*/

#include "../../include/my.h"

background_t *create_bg(char *path, sfIntRect rect)
{
    background_t *bg = malloc(sizeof(background_t));
    bg->sprt = malloc(sizeof(sfSprite *) * 5);
    bg->txtr = malloc(sizeof(sfTexture *) * 5);
    bg->rect = malloc(sizeof(sfIntRect) * 5);
    for (int i = 0; i < 5; i++)
        bg->sprt[i] = sfSprite_create();
    bg->txtr[0] = sfTexture_createFromFile("./asset/bg/sky.png", NULL);
    bg->txtr[1] = sfTexture_createFromFile("./asset/bg/tower.png", NULL);
    bg->txtr[2] = sfTexture_createFromFile("./asset/bg/town.png", NULL);
    bg->txtr[3] = sfTexture_createFromFile("./asset/bg/montain.png", NULL);
    bg->txtr[4] = sfTexture_createFromFile(path, NULL);
    for (int i = 0; i < 5; i++) {
        bg->rect[i] = (sfIntRect)rect;
        sfSprite_setTexture(bg->sprt[i], bg->txtr[i], sfFalse);
        sfSprite_setTextureRect(bg->sprt[i], bg->rect[i]);
    }
    for (int i = 0; i < 4; i++)
        sfTexture_setRepeated(bg->txtr[i], sfTrue);
    return bg;
}
