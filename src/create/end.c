
#include "../../include/rpg.h"

static void load_credits(end_t *end)
{
    char *buf = get_buffer("./end.txt");
    char **credits = my_strtok(buf, '\n');
    int size = 0;
    for (int i = 0; credits[i] != NULL; i++)
        size++;
    end->txt = malloc(sizeof(text_t *) * (size + 1));
    end->txt[size] = NULL;
    for (int i = 0; credits[i] != NULL; i++)
        end->txt[i] = create_text("./asset/font/font.ttf", credits[i], 20, (sfVector2f) {50, 720 + i * 25});
}

end_t *create_end(game_t *game)
{
    end_t *end = malloc(sizeof(end_t));
    load_credits(end);
    end->clock = sfClock_create();
    end->seconds = 0;
    return end;
}