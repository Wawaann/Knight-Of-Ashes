
#include "../include/my.h"

void va_putstr(va_list *list)
{
    my_putstr(va_arg(*list, char *));
}
