
#include "../../include/rpg.h"

void display_menu(game_t *game)
{
    for (int i = 0; MNU[IND]->txt[i]; i++)
        sfRenderWindow_drawText(WNDW->wndw, MNU[IND]->txt[i]->text, NULL);
    for (int i = 0; MNU[IND]->btn[i]; i++)
        sfRenderWindow_drawSprite(WNDW->wndw, MNU[IND]->btn[i]->sprt, NULL);
}
