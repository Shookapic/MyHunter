/*
** EPITECH PROJECT, 2022
** frame_time
** File description:
** frame_time
*/

#include "../include/struct.h"

int anime_sprite(param_t *callfun, int max);

void frame_time(float deltaTime, param_t *callfun)
{
    if (deltaTime >= 0.2) {
        anime_sprite(callfun, 331);
        sfClock_restart(callfun->clock);
    }
    return;
}
