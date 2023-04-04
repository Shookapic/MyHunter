/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#include "struct.h"
#include <stdlib.h>

duck_t *create_duck(char const *path, sfVector2f position)
{
    duck_t *duck = malloc(sizeof(duck_t));

    duck->sprite = sfSprite_create();
    duck->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(duck->sprite, duck->texture, sfTrue);
    duck->hitboxduck = sfSprite_getTextureRect(duck->sprite);
    duck->hitboxduck.width = 111;
    sfSprite_setPosition(duck->sprite, position);
    duck->collision_box = FRECT(position.x, position.y, 70, 70);
    return duck;
    free(duck);
}

duck_t2 *create_duck2(char const *path, sfVector2f position)
{
    duck_t2 *duck2 = malloc(sizeof(duck_t2));

    duck2->sprite = sfSprite_create();
    duck2->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(duck2->sprite, duck2->texture, sfTrue);
    duck2->hitboxduck2 = sfSprite_getTextureRect(duck2->sprite);
    duck2->hitboxduck2.width = 111;
    sfSprite_setPosition(duck2->sprite, position);
    duck2->collision_box = FRECT(position.x, position.y, 70, 70);
    return duck2;
    free(duck2);
}

start_t *create_start(char const *path, sfVector2f position)
{
    start_t *start = malloc(sizeof(start_t));

    start->sprite = sfSprite_create();
    start->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(start->sprite, start->texture, sfTrue);
    start->hitboxstart = sfSprite_getTextureRect(start->sprite);
    start->hitboxstart.width = 500;
    sfSprite_setPosition(start->sprite, position);
    start->collision_box = FRECT(position.x, position.y, 70, 70);
    return start;
    free(start);
}

cursor_t *create_cursor(char const *path)
{
    cursor_t *cursor = malloc(sizeof(cursor_t));

    cursor->sprite = sfSprite_create();
    cursor->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(cursor->sprite, cursor->texture, sfTrue);
    cursor->mouse_pos = (sfVector2i) {0, 0};
    return cursor;
    free(cursor);
}
