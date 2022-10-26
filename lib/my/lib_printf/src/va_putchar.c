
#include "../include/my.h"

void va_putchar(va_list *list)
{
    char c = va_arg(*list, int);
    my_putchar(c);
}
