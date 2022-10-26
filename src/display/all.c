
#include "../../include/rpg.h"

void show_hitbox(sfRenderWindow *window, sfColor color, sfFloatRect rect)
{
    sfRectangleShape *hitbox = sfRectangleShape_create();
    sfRectangleShape_setFillColor(hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(hitbox, color);
    sfRectangleShape_setOutlineThickness(hitbox, 1);
    sfRectangleShape_setPosition(hitbox, (sfVector2f){rect.left, rect.top});
    sfRectangleShape_setSize(hitbox, V2F(rect.width, rect.height));
    sfRenderWindow_drawRectangleShape(window, hitbox, NULL);
    sfRectangleShape_destroy(hitbox);
}

void show_hitbox_ply(sfRenderWindow *window, obj_t *mob)
{
    sfRectangleShape *hitbox = sfRectangleShape_create();
    sfRectangleShape_setFillColor(hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(hitbox, sfBlue);
    sfRectangleShape_setOutlineThickness(hitbox, 5);
    sfFloatRect bound = sfSprite_getGlobalBounds(mob->sprt);
    sfRectangleShape_setPosition(hitbox, (sfVector2f){bound.left, bound.top});
    sfRectangleShape_setSize(hitbox, (sfVector2f){bound.width, bound.height});
    sfRenderWindow_drawRectangleShape(window, hitbox, NULL);
    sfRectangleShape_destroy(hitbox);
}

void display(game_t *game)
{
    sfRenderWindow_clear(WNDW->wndw, sfBlack);
    sfRenderWindow_setView(WNDW->wndw, WNDW->view);
    if (!game->game) {
        display_menu(game);
    } else if (game->is_end) {
        display_end(game);
    } else {
        display_scene(game);
    }
    sfRenderWindow_display(WNDW->wndw);
}
