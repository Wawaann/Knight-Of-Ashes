
#include <unistd.h>

int my_strlen(const char *str);

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
