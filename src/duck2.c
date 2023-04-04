/*
** EPITECH PROJECT, 2022
** duck
** File description:
** duck
*/

#include "../include/struct.h"

void draw_duck2(duck_t2 *duck2, sfRenderWindow *window)
{
    sfSprite_setTextureRect(duck2->sprite, duck2->hitboxduck2);
    sfRenderWindow_drawSprite(window, duck2->sprite, NULL);
    return;
}
