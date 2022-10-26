
#include "../../include/rpg.h"

obj_t *create_obj(char *path, sfVector2f pos, sfVector2f scl, sfIntRect rect)
{
    obj_t *obj = malloc(sizeof(obj_t));
    obj->sprt = sfSprite_create();
    obj->txtr = sfTexture_createFromFile(path, NULL);
    obj->clock = sfClock_create();
    obj->pos = pos;
    sfSprite_setTexture(obj->sprt, obj->txtr, sfTrue);
    sfSprite_setTextureRect(obj->sprt, rect);
    sfSprite_setPosition(obj->sprt, pos);
    sfSprite_setScale(obj->sprt, scl);
    sfFloatRect bounds = sfSprite_getLocalBounds(obj->sprt);
    sfSprite_setOrigin(obj->sprt, (sfVector2f){bounds.width / 2, bounds.height});
    obj->i = 0;
    obj->display = false;
    return obj;
}
