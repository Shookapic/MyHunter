/*
** EPITECH PROJECT, 2022
** press_start
** File description:
** press_start
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "../include/struct.h"
#include <stdlib.h>

void press_start(param_t *callfun)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfFloatRect hitbox2 = sfSprite_getGlobalBounds(callfun->start->sprite);
        if (sfFloatRect_contains(&hitbox2,
            callfun->cursor->mouse_pos.x, callfun->cursor->mouse_pos.y)) {
                sfRenderWindow_close(callfun->window2);
        }
    }
}
