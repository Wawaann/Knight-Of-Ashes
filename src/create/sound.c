
#include "../../include/rpg.h"

sfSound *create_sound(char *path)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(path);
    sfSound_setBuffer(sound, buffer);
    sfSound_setVolume(sound, 100);
    return sound;
}
