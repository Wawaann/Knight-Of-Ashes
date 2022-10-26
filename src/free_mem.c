
#include "../include/rpg.h"

void free_map(scene_t *scene)
{
    for (int i = 0; scene->map->lvl[i]; i++)
        free(scene->map->lvl[i]);
    for (int i = 0; scene->map->map[i]; i++)
        free(scene->map->map[i]);
    free(scene->map->lvl);
    free(scene->map->map);
    free(scene->map->txtr);
    free(scene->map);
}

void free_scn(scene_t **scene)
{
    for (int i = 0; scene[i]; i++) {
        free_map(scene[i]);
        free(scene[i]->bg->rect);
        free(scene[i]->bg->sprt);
        free(scene[i]->bg->txtr);
        free(scene[i]->bg);
        free(scene[i]);
    }
    free(scene);
}

void free_mnu(menu_t **menu)
{
    for (int i = 0; menu[i]; i++) {
        for (int j = 0; menu[i]->btn[j]; j++)
            free(menu[i]->btn[j]);
        for (int j = 0; menu[i]->txt[j]; j++)
            free(menu[i]->txt[j]);
        free(menu[i]->btn);
        free(menu[i]->txt);
        free(menu[i]->sound);
        free(menu[i]);
    }
    free(menu);
}

void free_ply(ply_t *ply)
{
    free(ply->obj->rect);
    free(ply->obj);
    free(ply);
}

void free_mem(game_t *game)
{
    if (PLY != NULL) {
        free_ply(PLY);
        free_scn(SCN);
    }
    free_mnu(MNU);
    free(game);
}
