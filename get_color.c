/*
** EPITECH PROJECT, 2022
** task05 get_color
** File description:
** This will return the int value of the RGB values given
*/

#include <stdio.h>

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int i = 0;
    i = (int) blue + ((int) green << 8) + ( (int) red << 16);
    return i;
}
