/*
** EPITECH PROJECT, 2022
** pos_sprite
** File description:
** pos_sprite
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "../include/struct.h"
#include <stdlib.h>

int pos_sprite(duck_t *duck, duck_t2 *duck2)
{
    int random = rand() & 900;
    int random2 = rand() & 899;
    sfVector2f gpos = (sfSprite_getPosition(duck->sprite));
    sfVector2f gpos2 = (sfSprite_getPosition(duck2->sprite));
    if (gpos.x > 1930)
        sfSprite_setPosition(duck->sprite, V2F(-10, random));
    if (gpos2.x > 1930)
    sfSprite_setPosition(duck2->sprite, V2F(-10, random2));
    return 0;
}
