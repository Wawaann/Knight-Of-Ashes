
#include "../../include/rpg.h"

hitbox_t *get_hitbox_rect(char *map, int top, int i)
{
    hitbox_t *hitbox = malloc(sizeof(hitbox_t));
    hitbox->rect = FLTR(0, 0, 0, 0);
    hitbox->y = top * 80 + 15;
    int a = 0;
    int x = 0;

    for (; map[i]; i++) {
        if (map[i] == 'F') {
            a += 1;
            hitbox->rect.height = 80;
            hitbox->rect.width += 80;
        } if (map[i] == 'E') {
            hitbox->rect.width += 45;
        } if (a == 1) {
            hitbox->rect.top = top * 80 + 15;
            hitbox->rect.left = i * 80;
        } if (map[i] != 'F' && map[i] != 'E' && a >= 1)
            break;
    }
    return hitbox;
}

int len_hitbox(hitbox_t **hitbox)
{
    int i = 0;

    for (; hitbox[i]; i++);
    return i;
}

int is_hitbox(char *line, int i)
{
    for (; line[i]; i++) {
        if (line[i] == 'F')
            return i;
    }
    return -1;
}

void get_hitbox(map_t *map, int hitbox)
{
    int c = 0, len = hitbox;
    int x = 0;
    for (int i = 0, j = 0; map->map[i]; j++) {
        if (c == len) {
            return;
        }
        x = is_hitbox(map->map[i], x);
        if (j >= map->size || x == -1) {
            i++;
            j = 0;
            x = 0;
        } else {
            map->hitbox[c] = get_hitbox_rect(map->map[i], i + 3, x);
            x = (map->hitbox[c]->rect.left + map->hitbox[c]->rect.width ) / 80;
            c++;
        }
    }
}
