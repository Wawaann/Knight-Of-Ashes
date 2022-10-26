
#include "../../include/rpg.h"

scene_t *init_scene(int npc, int mobs, int txt, int item)
{
    scene_t *scn = malloc(sizeof(scene_t));
    scn->bg = malloc(sizeof(background_t));
    if (npc == 1)
        scn->npc = malloc(sizeof(npc_t *));
    else
        scn->npc = NULL;
    scn->mob = malloc(sizeof(obj_t *) * (mobs + 1));
    scn->text = malloc(sizeof(text_t) * (txt + 1));
    scn->item = malloc(sizeof(item_t *) * (item + 1));
    scn->mob[mobs] = NULL;
    scn->text[txt] = NULL;
    scn->item[item] = NULL;
    return scn;
}
