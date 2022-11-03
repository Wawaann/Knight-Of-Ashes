
#include "../../include/rpg.h"

static void create_heart(hud_t *hud)
{
    hud->heart = malloc(5 * sizeof(obj_t *));
    for (int i = 0; i < 5; i++) {
        hud->heart[i] = malloc(sizeof(obj_t));
        hud->heart[i]->sprt = malloc(sizeof(sfSprite *));
        hud->heart[i]->txtr = malloc(sizeof(sfTexture *));
        hud->heart[i]->pos = V2F((-175 + (i * 17)) * 3, 50);
        hud->heart[i] = create_obj("./asset/hud/heart.png", hud->heart[i]->pos, V2F(3, 3), INTR(0, 0, 16, 16));
    }
}

static void create_stamina(hud_t *hud)
{
    hud->stamina = malloc(5 * sizeof(obj_t *));
    for (int i = 0; i < 5; i++) {
        hud->stamina[i] = malloc(sizeof(obj_t));
        hud->stamina[i]->sprt = malloc(sizeof(sfSprite *));
        hud->stamina[i]->txtr = malloc(sizeof(sfTexture *));
        hud->stamina[i]->pos = V2F((-175 + (i * 17)) * 3, 100);
        hud->stamina[i] = create_obj("./asset/hud/stamina.png", hud->stamina[i]->pos, V2F(2, 2), INTR(0, 0, 16, 22));
    }
}

hud_t *create_hud(game_t *game)
{
    hud_t *hud = malloc(sizeof(hud_t));
    create_heart(hud);
    create_stamina(hud);
    return hud;
}
