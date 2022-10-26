
#include "macros.h"

#ifndef RPG_H
    #define RPG_H

    //:::::::::: Create ::::::::::
    wndw_t *create_window(void);
    sfSound *create_sound(char *path);
    background_t *create_bg(char *path, sfIntRect rect);
    button_t *create_btn(char *path, sfIntRect rect);
    fire_t *create_fire(map_t *map);
    map_t *create_map(char *filepath, int hitbox, float y);
    mob_t *create_mob(map_t *map, char *asset, char ch);
    mob_t *create_boss(map_t *map, char *asset, char ch);
    npc_t *create_npc(map_t *map);
    text_t *create_text(char *font, char *str, int size, sfVector2f pos);
    obj_t *create_obj(char *path, sfVector2f pos, sfVector2f scl,
                    sfIntRect rect);
    ply_t *create_player(game_t *game);
    sfView *create_view(sfFloatRect rect);
    void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl);
    void create_scn_one(scene_t *scene, game_t *game);
    void create_scene(game_t *game);
    void create_menu(game_t *game);
    hud_t *create_hud(game_t *game);
    item_t *create_item(char *path, map_t *map, int stat, int itm);
    void inventory(game_t *game);
    void scn_one(scene_t *scn, game_t *game);
    void scn_two(scene_t *scn, game_t *game);
    void scn_three(scene_t *scn, game_t *game);
    void scn_four(scene_t *scn, game_t *game);
    end_t *create_end(game_t *game);


    //:::::::::: Display :::::::::::
    void display(game_t *game);
    void display_menu(game_t *game);
    void display_scene(game_t *game);
    void display_end(game_t *game);

    //:::::::::: Free & Destroy ::::::::::
    void destroy_all(game_t *game);
    void free_mem(game_t *game);

    //:::::::::: Read ::::::::::
    char *get_buffer(char const *filepath);
    void get_txtr(map_t *map, char *buf);
    void get_lvl(map_t *map, char *buf);
    void get_size(map_t *map, char *buf);
    void get_map(map_t *map, char *buf);
    char **my_strtok(char *str, char sep);

    //:::::::::: Animate ::::::::::
    void animate(game_t *game);
    void move_rect(obj_t *obj, sfIntRect *rect, int offset, int max_value);
    void timer(obj_t *obj, float t, int x, int y);
    void animate_knight(ply_t *ply);
    void animate_mob(game_t *game);

    //:::::::::: Move ::::::::::
    void move(game_t *game, int move, int i);
    void move_player(game_t *game);
    void jump(ply_t *ply);
    void fall(game_t *game, float y);
    void die(game_t *game);

    //:::::::::: Event :::::::::::
    void analyse_event(game_t *game);
    void manage_input_released(sfRenderWindow *wndw,
                                sfEvent event, game_t *game);
    void manage_menu(sfRenderWindow *wndw, sfEvent event, game_t *game);
    void actions_handler(game_t *game);

    //::::::::::: Init :::::::::::
    scene_t *init_scene(int npc, int mob, int txt, int item);
    menu_t *init_menu(int btn, int txt);
    game_t *init_game(void);

    //:::::::::: Map ::::::::::
    sfVector2f get_pos(map_t *map, char ch, int x_dec, int y_dec);
    bool player_can_move(ply_t *ply, map_t *map, int move);
    hitbox_t *get_hitbox_rect(char *map, int top, int i);
    void get_hitbox(map_t *map, int hitbox);

    //:::::::::: Fight ::::::::::
    void speed_atk(game_t *game);
    void heavy_atk(game_t *game);

#endif
