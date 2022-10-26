
#include "../../include/rpg.h"

static void move_txt(game_t *game)
{
    END->time = sfClock_getElapsedTime(END->clock);
    END->seconds = END->time.microseconds / 1000000.0;
    if (END->seconds > 0.005) {
        for (int i = 0; END->txt[i]; i++)
        END->txt[i]->pos = V2F(50, END->txt[i]->pos.y - 15);
        sfClock_restart(END->clock);
    }
}

void display_end(game_t *game)
{
    move_txt(game);
    for (int i = 0; END->txt[i]; i++) {
        sfText_setPosition(END->txt[i]->text, END->txt[i]->pos);
        if (!END->txt[i + 1] && END->txt[i]->pos.y < -200)
            sfRenderWindow_close(WNDW->wndw);
        sfRenderWindow_drawText(WNDW->wndw, END->txt[i]->text, NULL);
    }
}