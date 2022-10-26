/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCE-2-1-myrpg-ewan.bigotte
** File description:
** sound
*/

#include "../../include/rpg.h"

sfSound *create_sound(char *path)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(path);
    sfSound_setBuffer(sound, buffer);
    sfSound_setVolume(sound, 100);
    return sound;
}
