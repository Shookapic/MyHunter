/*
** EPITECH PROJECT, 2022
** lemain.c
** File description:
** lemain.c
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "../include/struct.h"
#include <stdlib.h>

int anime_sprite(param_t *callfun, int max);
int reset_sprite(param_t *callfun, int *counter);
void frame_time(float deltaTime, param_t *callfun);
int pos_sprite(duck_t *duck, duck_t2 *duck2);
int home_menu(param_t *callfun);
void lemain(param_t *callfun);
void eom(param_t *callfun);
void my_event(param_t *callfun);

void press_one(param_t *callfun, int *counter)
{
    if (callfun->event.type == sfEvtMouseButtonPressed) {
        if ( callfun->event.mouseButton.button == sfMouseLeft)
            reset_sprite(callfun, counter);
    }
}

void lemain(param_t *callfun)
{
    int counter = 0;
    sfSprite_setScale(callfun->bck, callfun->scaling);
    sfSprite_setTexture(callfun->bck, callfun->background, sfTrue);
    sfRenderWindow_setMouseCursorVisible(callfun->window, sfFalse);
    while (sfRenderWindow_isOpen(callfun->window)) {
        callfun->time = sfClock_getElapsedTime(callfun->clock);
        float deltaTime = sfTime_asSeconds(callfun->time);
        while (sfRenderWindow_pollEvent(callfun->window, &callfun->event)) {
            callfun->cursor->mouse_pos =
            sfMouse_getPositionRenderWindow(callfun->window);
            my_event(callfun);
            press_one(callfun, &counter);
        }
        frame_time(deltaTime, callfun);
        eom(callfun);
    }
    sfRenderWindow_destroy(callfun->window);
}
