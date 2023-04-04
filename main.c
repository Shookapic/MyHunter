/*
** EPITECH PROJECT, 2022
** My_Hunter
** File description:
** My_Hunter
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include "include/struct.h"
#include <SFML/Audio.h>
#include <stdlib.h>

int anime_sprite(param_t *callfun, int max);
int reset_sprite(param_t *callfun);
void frame_time(float deltaTime, param_t *callfun);
int pos_sprite(duck_t *duck, duck_t2 *duck2);
int home_menu(param_t *callfun);
void lemain(param_t *callfun);

void my_event(param_t *callfun)
{
    if (callfun->event.type == sfEvtClosed) {
        sfRenderWindow_close(callfun->window);
    }
    return;
}

int help_message(int ac, char **av)
{
    char *h = "Welcome to My Hunter !\n";
    char *h1 = "To play the game you need to click with your left mouse button";
    char *h1e = "on the duck.\n";
    char *h3 = "!!! GOOD LUCK !!!\n";

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_printf("%s%s%s%s",h, h1, h1e, h3);
        return 1;
    }
    return 0;
}

void eom(param_t *callfun)
{
    sfRenderWindow_setFramerateLimit(callfun->window, 60);
    sfVector2f move = {10, 0};
    sfRenderWindow_clear(callfun->window, sfBlack);
    sfRenderWindow_drawSprite(callfun->window, callfun->bck, NULL);
    draw_duck(callfun->duck, callfun->window);
    draw_duck2(callfun->duck2, callfun->window);
    sfSprite_move(callfun->duck->sprite, move);
    sfSprite_move(callfun->duck2->sprite, move);
    pos_sprite(callfun->duck, callfun->duck2);
    draw_cursor(callfun->cursor, callfun->window);
    sfRenderWindow_display(callfun->window);
    return;
}

int main(int ac, char **av)
{
    if (help_message(ac, av) == 1)
        return 0;
    param_t *callfun = init();
    sfMusic_play(callfun->music);
    sfMusic_setLoop(callfun->music, sfTrue);
    home_menu(callfun);
    lemain(callfun);
    return 0;
}
