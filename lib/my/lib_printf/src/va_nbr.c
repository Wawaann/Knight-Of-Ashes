
#include "../include/my.h"

void va_nbr(va_list *list)
{
    my_put_nbr(va_arg(*list, int));
}
