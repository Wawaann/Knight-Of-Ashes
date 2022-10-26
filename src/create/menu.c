
#include "../../include/rpg.h"

static void create_menu_one(menu_t *mnu)
{
    char font[] = "./asset/font/font.ttf";
    mnu->btn[0] = create_btn("./asset/bg/title.png", INTR(0, 0, 1050, 120));
    set_btn(mnu->btn[0], (sfVector2f){640, 200}, V2F(0.9, 0.9));
    mnu->btn[1] = create_btn("./asset/btn/btn.png", INTR(0, 0, 150, 30));
    set_btn(mnu->btn[1], (sfVector2f){640, 409}, V2F(1.3, 1.1));
    mnu->txt[0] = create_text(font, "start", 30, V2F(640, 400));
    mnu->txt[1] = create_text(font, "option", 30, V2F(640, 450));
    mnu->txt[2] = create_text(font, "quit", 30, V2F(640, 500));
    mnu->sound[0] = create_sound("./asset/sound/ok.ogg");
    mnu->sound[1] = create_sound("./asset/sound/move.ogg");
    mnu->sound[2] = create_sound("./asset/sound/start.ogg");
}

static void create_menu_two(menu_t *mnu)
{
    char font[] = "./asset/font/font.ttf";
    mnu->btn[0] = create_btn("./asset/btn/btn.png", INTR(0, 0, 150, 30));
    set_btn(mnu->btn[0], (sfVector2f){740, 309}, V2F(1, 1));
    mnu->txt[0] = create_text(font, "OPTION", 55, V2F(640, 50));
    mnu->txt[1] = create_text(font, "eric mode", 30, V2F(540, 300));
    mnu->txt[2] = create_text(font, "no", 25, V2F(740, 300));
    mnu->txt[3] = create_text(font, "fullscreen", 30, V2F(540, 350));
    mnu->txt[4] = create_text(font, "no", 25, V2F(740, 350));
    mnu->txt[5] = create_text(font, "music", 30, V2F(566, 400));
    mnu->txt[6] = create_text(font, "yes", 25, V2F(740, 400));
    mnu->txt[7] = create_text(font, "back", 32, V2F(640, 600));
    mnu->txt[8] = create_text(font, "quit", 32, V2F(640, 650));
    mnu->sound[0] = create_sound("./asset/sound/ok.ogg");
    mnu->sound[1] = create_sound("./asset/sound/move.ogg");
    mnu->sound[2] = create_sound("./asset/sound/start.ogg");
}

void create_menu(game_t *game)
{
    create_menu_one(MNU[0]);
    create_menu_two(MNU[1]);
}
