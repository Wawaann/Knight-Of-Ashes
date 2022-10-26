
#include "../../include/my.h"

void get_txtr(map_t *map, char *buf)
{
    map->txtr = malloc(my_strlen(buf));
    map->i = 0;

    for (; buf[map->i] != '\n'; map->i++)
        map->txtr[map->i] = buf[map->i];
    map->txtr[map->i] = '\0';
    map->i++;
}

void get_lvl(map_t *map, char *buf)
{
    int nb_lvl = buf[map->i] - 48;
    int j;
    map->lvl = malloc(sizeof(char *) * (nb_lvl + 1));
    map->lvl[(buf[map->i] - 48)] = NULL;
    map->i += 2;

    for (int i = 0; i < nb_lvl; i++) {
        j = 0;
        map->lvl[i] = malloc(30);
        for (; buf[map->i] != ' ' && buf[map->i] != '\n'; map->i++, j++) {
            map->lvl[i][j] = buf[map->i];
        }
        map->lvl[i][j] = '\0';
        map->i++;
    }
}

void get_size(map_t *map, char *buf)
{
    char *size = malloc(3);
    for (int i = 0; buf[map->i] != '\n'; map->i++, i++) {
        size[i] = buf[map->i];
    }
    size[2] = '\0';
    map->size = my_getnbr(size) + 1;
    map->i++;
}

void get_map(map_t *map, char *buf)
{
    int j;
    map->map = malloc(sizeof(char *) * 7);
    map->map[6] = NULL;

    for (int i = 0; i < 6; i++) {
        j = 0;
        map->map[i] = malloc(sizeof(char) * map->size);
        for (; buf[map->i] != '\n'; map->i++, j++) {
            map->map[i][j] = buf[map->i];
        }
        map->map[i][j] = '\0';
        map->i++;
    }
}
