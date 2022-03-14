/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** map
*/

#include "../../include/my.h"

map_t *create_map(char *filepath)
{
    map_t *map = malloc(sizeof(map_t));
    char *buf = get_buffer(filepath);
    get_txtr(map, buf);
    get_lvl(map, buf);
    get_size(map, buf);
    get_map(map, buf);
    return map;
}