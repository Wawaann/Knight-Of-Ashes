
#include "../../include/rpg.h"

static void set_sprt(background_t *bg, sfIntRect rect)
{
    sfSprite_setTexture(bg->sprt[5], bg->txtr[5], sfFalse);
    for (int i = 0; i < 5; i++) {
        bg->rect[i] = (sfIntRect)rect;
        sfSprite_setTexture(bg->sprt[i], bg->txtr[i], sfFalse);
        sfSprite_setTextureRect(bg->sprt[i], bg->rect[i]);
        sfTexture_setRepeated(bg->txtr[i], sfTrue);
        sfSprite_setPosition(bg->sprt[i], V2F(-1280, 0));
    }
    sfSprite_setPosition(bg->sprt[0], bg->pos[0]);
    sfSprite_setPosition(bg->sprt[1], bg->pos[1]);
}

background_t *create_bg(char *path, sfIntRect rect)
{
    background_t *bg = malloc(sizeof(background_t));
    bg->sprt = malloc(sizeof(sfSprite *) * 6);
    bg->txtr = malloc(sizeof(sfTexture *) * 6);
    bg->rect = malloc(sizeof(sfIntRect) * 6);
    bg->pos = malloc(sizeof(sfVector2f) * 2);
    bg->pos[0] = V2F(0, 0);
    bg->pos[1] = V2F(-10240, 0);
    for (int i = 0; i < 6; i++)
        bg->sprt[i] = sfSprite_create();
    bg->txtr[0] = sfTexture_createFromFile("./asset/bg/sky.png", NULL);
    bg->txtr[1] = sfTexture_createFromFile("./asset/bg/sky.png", NULL);
    bg->txtr[2] = sfTexture_createFromFile("./asset/bg/tower.png", NULL);
    bg->txtr[3] = sfTexture_createFromFile("./asset/bg/town.png", NULL);
    bg->txtr[4] = sfTexture_createFromFile("./asset/bg/montain.png", NULL);
    bg->txtr[5] = sfTexture_createFromFile(path, NULL);
    set_sprt(bg, rect);
    return bg;
}
