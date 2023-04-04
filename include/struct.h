/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#pragma once

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#define V2F(x, y) (sfVector2f) { \
        x, y \
    }

#define FRECT(x, y, width, height) (sfFloatRect) { \
        x, y, width, height \
    }

typedef struct duck_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect collision_box;
    sfIntRect hitboxduck;
    sfVector2f duck_pos;
} duck_t;

typedef struct duck_s2 {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect collision_box;
    sfIntRect hitboxduck2;
    sfVector2f duck_pos;
} duck_t2;

typedef struct start_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect collision_box;
    sfIntRect hitboxstart;
    sfVector2f duck_pos;
} start_t;

typedef struct cursor_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i mouse_pos;
} cursor_t;

typedef struct param_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfRenderWindow* window2;
    sfVector2f scaling;
    sfVector2f vmove;
    sfEvent event;
    sfTexture *background;
    sfSprite *bck;
    duck_t *duck;
    duck_t2 *duck2;
    cursor_t *cursor;
    sfClock *clock;
    sfTime time;
    start_t *start;
    sfMusic *music;
} param_t;

duck_t *create_duck(char const *, sfVector2f);
void draw_duck(duck_t *, sfRenderWindow *);
duck_t2 *create_duck2(char const *, sfVector2f);
void draw_duck2(duck_t2 *, sfRenderWindow *);
cursor_t *create_cursor(char const *path);
void draw_cursor(cursor_t *cursor, sfRenderWindow *win);
void draw_start(start_t *start, sfRenderWindow *window);
start_t *create_start(char const *path, sfVector2f position);
param_t *init(void);

int my_strlen(char const *str);
int my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int nb);
int my_putfloat(double nb);
int my_minhexa(long nb);
int my_put_bin(int nb);
int my_puthexa(long nb);
int my_putnbr(int nb);
int my_octal(int nb);
int sndmodulo(char const *format, va_list *list, int i);
int my_pointers(va_list *list);
int my_printf(char const *format, ...);
