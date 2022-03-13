/*
** EPITECH PROJECT, 2022
** my_Rpg
** File description:
** read
*/

#include "../include/my.h"

int get_size(char const *filepath)
{
    int byte = 0;
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(filepath, "r");
    while ((read = getline(&line, &len, fp)) != -1) {
        byte += len;
    }
    fclose(fp);
    return byte;
}

char *get_buffer(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char ch;
    char *map = malloc(get_size(filepath));
    int i = 0;

    if (fd == -1)
        my_putstr("ERROR\n");
    for (; read(fd, &ch, 1) > 0; i++) {
        map[i] = ch;
    }
    map[i + 1] = '\0';
    return map;
}

int main(int ac, char **av)
{
    char *map = get_buffer(av[1]);
    printf("%s", map);
    return 0;
}
