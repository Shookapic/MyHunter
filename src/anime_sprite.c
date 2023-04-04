/*
** EPITECH PROJECT, 2022
** anime_sprite
** File description:
** anime_sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include "../include/struct.h"

int anime_sprite(param_t *callfun, int max)
{
    if (callfun->duck->hitboxduck.left < (max -
    callfun->duck->hitboxduck.width)) {
        callfun->duck->hitboxduck.left += callfun->duck->hitboxduck.width;
    }else {
        callfun->duck->hitboxduck.left = 0;
    }
    if (callfun->duck2->hitboxduck2.left < (max -
    callfun->duck2->hitboxduck2.width)) {
        callfun->duck2->hitboxduck2.left += callfun->duck2->hitboxduck2.width;
    }else {
        callfun->duck2->hitboxduck2.left = 0;
    }
    return 0;
}
