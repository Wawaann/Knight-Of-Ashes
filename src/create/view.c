
#include "../../include/rpg.h"

sfView *create_view(sfFloatRect rect)
{
    sfView *view = sfView_createFromRect(rect);
    return view;
}
