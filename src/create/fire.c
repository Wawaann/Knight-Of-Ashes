
#include "../../include/rpg.h"

static char **get_fire_lvl(map_t *map)
{
    char **lvl = malloc(sizeof(char *) * (map->nb_lvl + 1));
    lvl[map->nb_lvl] = NULL;

    for (int i = 0; map->lvl[i]; i++) {
        lvl[i] = map->lvl[i];
    }
    return lvl;
}

static void fire_hitbox(fire_t *fire, map_t *map)
{
    fire->hitbox = malloc(sizeof(hitbox_t));
    fire->hitbox->rect = sfSprite_getGlobalBounds(fire->obj->sprt);
}

static void set_rect(obj_t *obj)
{
    obj->rect = malloc(sizeof(sfIntRect) * 3);
    obj->rect[0] = INTR(0, 0, 32, 32);
    obj->rect[1] = INTR(0, 32, 32, 32);
    obj->rect[2] = INTR(0, 64, 32, 32);
}

static obj_t *init_fire_obj(map_t *map)
{
    obj_t *obj = malloc(sizeof(obj_t));
    obj->sprt = sfSprite_create();
    obj->txtr = sfTexture_createFromFile("./asset/obj/fire.png", NULL);
    obj->clock = sfClock_create();
    obj->i = 0;
    obj->loop = 2;
    obj->pos = get_pos(map, 'f', 0, 0);
    set_rect(obj);
    sfSprite_setTexture(obj->sprt, obj->txtr, sfFalse);
    sfSprite_setTextureRect(obj->sprt, obj->rect[obj->i]);
    sfSprite_setPosition(obj->sprt, obj->pos);
    sfSprite_setScale(obj->sprt, V2F(2, 2));
    sfFloatRect bound = sfSprite_getLocalBounds(obj->sprt);
    sfSprite_setOrigin(obj->sprt, V2F(bound.width / 2, bound.height));
    return obj;
}

fire_t *create_fire(map_t *map)
{
    fire_t *fire = malloc(sizeof(fire_t));
    fire->obj = init_fire_obj(map);
    fire->lvl = get_fire_lvl(map);
    fire->fx = create_obj("./asset/fx/fire.png", fire->obj->pos, V2F(1, 1), INTR(0, 0, 96, 96));
    fire_hitbox(fire, map);
    return fire;
}
