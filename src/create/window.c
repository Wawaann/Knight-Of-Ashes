/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** window
*/

#include "../../include/my.h"

sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {1280, 720, 32};
    sfRenderWindow *window;
    window = sfRenderWindow_create(mode, "bs", sfResize | sfClose, NULL);
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}
