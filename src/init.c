/*
** EPITECH PROJECT, 2022
** initt
** File description:
** init
*/

#include "../include/struct.h"
#include <stdlib.h>

param_t *init(void)
{
    param_t *paramsettings = malloc(sizeof(param_t));
    paramsettings->mode = (sfVideoMode) {1920, 1080, 32};
    paramsettings->window = sfRenderWindow_create(paramsettings->mode,
    "My Hunter", sfResize | sfClose, NULL);
    paramsettings->scaling = (sfVector2f) {1.5,1.5};
    paramsettings->event = (sfEvent) {0};
    paramsettings->background = sfTexture_createFromFile("assets/stage.png",
    NULL);
    paramsettings->bck = sfSprite_create();
    paramsettings->duck = create_duck("assets/duck.png", V2F(1, 1));
    paramsettings->duck2 = create_duck2("assets/duck2.png", V2F(-300, 200));
    paramsettings->cursor = create_cursor("assets/crosshair.png");
    paramsettings->clock = sfClock_create();
    paramsettings->time = (sfTime) {0};
    paramsettings->vmove = (sfVector2f) {3, 0};
    paramsettings->start = create_start("assets/start.png", V2F(750, 500));
    paramsettings->window2 = sfRenderWindow_create(paramsettings->mode,
    "My Hunter ", sfResize | sfClose, NULL);
    paramsettings->music = sfMusic_createFromFile("songs/rpg_music.ogg");
    return paramsettings;
}
