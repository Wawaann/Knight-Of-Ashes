
#include "../../include/rpg.h"

void move_rect(obj_t *obj, sfIntRect *rect, int offset, int max_value)
{
    if (obj->i < obj->loop) {
        if (rect->left + offset >= max_value) {
            rect->left = 0;
        } else
            rect->left += offset;
    } else {
        if (rect->left + offset >= max_value) {
            obj->i = 0;
            rect->left = 0;
        } else {
            rect->left += offset;
        }
    }
}

void timer(obj_t *obj, float t, int x, int y)
{
    obj->time = sfClock_getElapsedTime(obj->clock);
    obj->seconds = obj->time.microseconds / 1000000.0;
    if (obj->seconds > t) {
        move_rect(obj, &obj->rect[obj->i], x, y);
        sfClock_restart(obj->clock);
    }
}
