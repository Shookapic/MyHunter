/*
** EPITECH PROJECT, 2022
** home_menu
** File description:
** home_menu
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "../include/struct.h"
#include <stdlib.h>

void press_start(param_t *callfun);

void my_event2(param_t *callfun)
{
    if (callfun->event.type == sfEvtClosed) {
        sfRenderWindow_close(callfun->window2);
        sfRenderWindow_close(callfun->window);
    }
    return;
}

int home_menu(param_t *callfun)
{
    sfSprite_setScale(callfun->bck, callfun->scaling);
    sfSprite_setTexture(callfun->bck, callfun->background, sfTrue);
    while (sfRenderWindow_isOpen(callfun->window2)) {
        while (sfRenderWindow_pollEvent(callfun->window2, &callfun->event)) {
        callfun->cursor->mouse_pos =
        sfMouse_getPositionRenderWindow(callfun->window2);
        my_event2(callfun);
        }
        press_start(callfun);
        sfRenderWindow_clear(callfun->window2, sfBlack);
        sfRenderWindow_drawSprite(callfun->window2, callfun->bck, NULL);
        draw_start(callfun->start, callfun->window2);
        sfRenderWindow_display(callfun->window2);
    }
    return 0;
}
