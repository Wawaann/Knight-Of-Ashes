
#include "../../include/rpg.h"

menu_t *init_menu(int btn, int txt)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->sound = malloc(sizeof(sfSound *) * 4);
    menu->btn = malloc(sizeof(button_t *) * (btn + 1));
    menu->txt = malloc(sizeof(text_t *) * (txt + 1));
    menu->btn[btn] = NULL;
    menu->txt[txt] = NULL;
    menu->sound[3] = NULL;
    return menu;
}
