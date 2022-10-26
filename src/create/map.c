
#include "../../include/rpg.h"

map_t *create_map(char *filepath, int hitbox, float y)
{
    map_t *map = malloc(sizeof(map_t));
    map->hitbox = malloc(sizeof(hitbox_t *) * (hitbox + 1));
    for (int i = 0; i < hitbox; i++)
        map->hitbox[i] = malloc(sizeof(hitbox_t));
    char *buf = get_buffer(filepath);
    map->move = 0;
    get_txtr(map, buf);
    get_lvl(map, buf);
    get_size(map, buf);
    get_map(map, buf);
    get_hitbox(map, hitbox);
    map->ply_pos = get_pos(map, 'P', 0, 0);
    map->hitbox[hitbox] = NULL;
    return map;
}
