
#include <unistd.h>

char my_putchar(char c)
{
    write(1, &c, 1);
}
