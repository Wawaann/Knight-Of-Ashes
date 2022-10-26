/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** window
*/

#include "../../include/rpg.h"

wndw_t *create_window(void)
{
    wndw_t *wndw = malloc(sizeof(wndw_t));
    sfVideoMode mode = {1280, 720, 32};

    wndw->wndw = sfRenderWindow_create(mode, "DARK SOULS", sfResize | sfClose, NULL);
    wndw->view = create_view(FLTR(0, 0, 1280, 720));
    sfRenderWindow_setMouseCursorVisible(wndw->wndw, sfTrue);
    sfRenderWindow_setFramerateLimit(wndw->wndw, 60);
    sfRenderWindow_setMouseCursorVisible(wndw->wndw, sfFalse);
    sfRenderWindow_setPosition(wndw->wndw, (sfVector2i){0, 0});
    sfImage *img_icon = sfImage_createFromFile("./asset/icon/icon.png");
    const sfUint8 *icon = sfImage_getPixelsPtr(img_icon);
    sfRenderWindow_setIcon(wndw->wndw, 256, 256, icon);
    return wndw;
}

void window_close(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
    sfRenderWindow_destroy(window);
}
