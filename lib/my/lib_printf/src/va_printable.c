
#include "../include/my.h"

void va_printable(va_list *list)
{
    my_putchar(92);
    my_put_octal(va_arg(*list, long long));
}
