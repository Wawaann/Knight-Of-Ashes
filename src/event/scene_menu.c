/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-mydefender-maxime.novarese
** File description:
** scene_menu
*/

#include "../../include/my.h"

void manage_scnmn_one(game_t *game, sfMouseButtonEvent mouse)
{
    sfFloatRect btn;

    for (int i = 0; game->scn[0]->btn[i]; i++) {
        btn = sfSprite_getGlobalBounds(game->scn[0]->btn[i]->sprt);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 0)
            game->i = 1;
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 1)
            game->i = 2;
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 2)
            sfRenderWindow_close(game->wndw);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 3)
            game->i = 3;
    }
}

void manage_scnmn_two(game_t *game, sfMouseButtonEvent mouse)
{
    sfFloatRect btn;

    for (int i = 0; game->scn[1]->btn[i]; i++) {
        btn = sfSprite_getGlobalBounds(game->scn[1]->btn[i]->sprt);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 0) {
            game->game = true;
            game->i = 0;
        } if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 1) {
            game->game = true;
            game->i = 1;
        } if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 2) {
            game->game = true;
            game->i = 2;
        } if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 3)
            sfRenderWindow_close(game->wndw);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 4) {
            game->i = 0;
        }
    }
}

void manage_scnmn_tree(game_t *game, sfMouseButtonEvent mouse)
{
    sfFloatRect btn;

    for (int i = 0; game->scn[2]->btn[i]; i++) {
        btn = sfSprite_getGlobalBounds(game->scn[2]->btn[i]->sprt);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 0)
            printf("sound!\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 1)
            printf("no sound\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 2)
            printf("music\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 3)
            printf("no music\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 4)
            my_printf("30 fps\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 5)
            my_printf("60 fps\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 6)
            my_printf("120 fps\n");
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 7)
            game->i = 0;
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 8)
            sfRenderWindow_close(game->wndw);
    }
}

void manage_scnmn_four(game_t *game, sfMouseButtonEvent mouse)
{
    sfFloatRect btn;

    for (int i = 0; game->scn[3]->btn[i]; i++) {
        btn = sfSprite_getGlobalBounds(game->scn[3]->btn[i]->sprt);
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 0)
            game->i = 0;
        if (sfFloatRect_contains(&btn, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->wndw);
    }
}
