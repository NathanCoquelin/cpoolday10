/*
** EPITECH PROJECT, 2022
** task04 my_show_param_array
** File description:
** This will show the content of an array
** created with the function in task03
*/

#include "my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av);

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != NULL; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        for (int j = 0; par[i].word_array[j] != NULL; j++) {
            my_putstr(par[i].word_array[j]);
            my_putchar('\n');
        }
    }
    return 0;
}
