/*
** EPITECH PROJECT, 2022
** duck
** File description:
** duck
*/

#include "../include/struct.h"

void draw_duck(duck_t *duck, sfRenderWindow *window)
{
    sfSprite_setTextureRect(duck->sprite, duck->hitboxduck);
    sfRenderWindow_drawSprite(window, duck->sprite, NULL);
    return;
}
