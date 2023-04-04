/*
** EPITECH PROJECT, 2022
** reset_sprite
** File description:
** reset_sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include "../include/struct.h"
#include <stdlib.h>

int reset_sprite(param_t *callfun, int *counter)
{
    int random = rand() & 900;
    int random2 = rand() & 899;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfFloatRect hitbox = sfSprite_getGlobalBounds(callfun->duck->sprite);
        if (sfFloatRect_contains(&hitbox,
            callfun->cursor->mouse_pos.x, callfun->cursor->mouse_pos.y)) {
            sfSprite_setPosition(callfun->duck->sprite, V2F(-10, random));
            *counter += 10;
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfFloatRect hitbox = sfSprite_getGlobalBounds(callfun->duck2->sprite);
        if (sfFloatRect_contains(&hitbox,
            callfun->cursor->mouse_pos.x, callfun->cursor->mouse_pos.y)) {
            sfSprite_setPosition(callfun->duck2->sprite, V2F(-10, random2));
            *counter += 10;
        }
    }
    return 0;
}
