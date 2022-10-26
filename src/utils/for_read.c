
#include "../../include/my.h"

int get_byte(char const *filepath)
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
    char *map = malloc(get_byte(filepath));
    int i = 0;

    if (fd == -1)
        my_putstr("ERROR\n");
    for (; read(fd, &ch, 1) > 0; i++) {
        map[i] = ch;
    }
    map[i] = '\0';
    return map;
}
