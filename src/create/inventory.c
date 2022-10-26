
#include "../../include/rpg.h"

obj_t **create_itm_inv(game_t *game)
{
    obj_t **item = malloc(sizeof(obj_t *) * 3);
    item[0] = create_obj("./asset/obj/d_chestplate.png", V2F(-158, 445),
    V2F(0.3, 0.3), INTR(0, 0, 174, 162));
    item[1] = create_obj("./asset/obj/d_sword.png", V2F(-98, 445),
    V2F(0.68, 0.68), INTR(0, 0, 40, 80));
    item[2] = NULL;
    return (item);
}

void inventory(game_t *game)
{
    INV = malloc(sizeof(inventory_t));
    INV->sprt = sfSprite_create();
    INV->txtr = sfTexture_createFromFile("./asset/obj/inventory.png", NULL);
    INV->pos = V2F(80, 320);
    INV->display = false;
    INV->item = create_itm_inv(game);
    sfSprite_setTexture(INV->sprt, INV->txtr, sfFalse);
    sfSprite_setScale(INV->sprt, V2F(1.75, 1.75));
    sfSprite_setOrigin(INV->sprt, V2F(166, 81));
    sfSprite_setPosition(INV->sprt, INV->pos);
}
