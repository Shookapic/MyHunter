/*
** EPITECH PROJECT, 2022
** start
** File description:
** start
*/

#include "../include/struct.h"

void draw_start(start_t *start, sfRenderWindow *window)
{
    sfSprite_setTextureRect(start->sprite, start->hitboxstart);
    sfRenderWindow_drawSprite(window, start->sprite, NULL);
    return;
}
