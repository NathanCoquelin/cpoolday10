/*
** EPITECH PROJECT, 2022
** task03 my_params_to_array
** File description:
** Thiw will store the params into an array of structures
*/

#include <stdlib.h>
#include "my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *output = malloc(sizeof(struct info_param) * (ac + 1));

    if (output == NULL)
        return NULL;
    for (unsigned int i = 0; i < ac; i++) {
        output[i].length = my_strlen(av[i]);
        output[i].str = av[i];
        output[i].copy = my_strdup(av[i]);
        output[i].word_array = my_str_to_word_array(av[i]);
    }
    output[ac].str = NULL;
    return output;
}
