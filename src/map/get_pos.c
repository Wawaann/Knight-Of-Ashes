/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** get_pos
*/

#include "../../include/my.h"

sfVector2f get_pos(map_t *map, char ch, int x_dec, int y_dec)
{
    sfVector2f pos;

    for (int i = 0, j = 0; map->map[i]; j++) {
        if (j == map->size) {
            i++;
            j = 0;
        } if (map->map[i][j] == ch) {
            pos.x = j * 80 + x_dec;
            pos.y = (720 - (6 - i) * 80) - y_dec;
            return pos;
        }
    }
    return (sfVector2f){0, 0};
}

// int main(int ac, char **av)
// {
//     map_t *map = create_map(av[1]);
//     sfVector2f pos = get_pos(map, 'P', 0, 0);
//     sfVector2f fire = get_pos(map, 'f');
//     printf("ply x = %f; ply y = %f\n", pos.x, pos.y);
//     printf("fire x = %f; fire y = %f\n", fire.x, fire.y);
//     return 0;
// }
