
#include "../../include/rpg.h"

sfVector2f get_pos(map_t *map, char ch, int x_dec, int y_dec)
{
    sfVector2f pos;
    for (int i = 0; map->map[i]; i++) {
        for (int j = 0; map->map[i][j]; j++) {
            if (map->map[i][j] == ch) {
                pos.x = j * 80;
                pos.y = (720 - (6 - i) * 80) + 95 + y_dec;
                return pos;
            }
        }
    }
    return V2F(0, 0);
}
