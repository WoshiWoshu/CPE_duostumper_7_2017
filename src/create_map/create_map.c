/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** functions that create the map
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include_connect_4/connect_4.h"

static void place_element(char **c_4_map, co_4_t *co_4, int i, int j)
{
	if ((j == 0 && i != 0 && i != co_4->y - 1)
	|| (j == co_4->x - 1 && i != 0 && i != co_4->y - 1))
		c_4_map[i][j] = '|';
	else if (i == 0 || i == co_4->y - 1)
		c_4_map[i][j] = '+';
	else {
		c_4_map[i][j] = '.';
		co_4->check_enough = co_4->check_enough + 1;
	}
}

extern void create_map(co_4_t *co_4)
{
	char **c_4_map = co_4->c_4_map;
	int i = 0;
	int j = 0;

	for (i = 0; i < co_4->y; ++i) {
		c_4_map[i] = malloc(sizeof(char) * co_4->x + 2);
		for (j = 0; j < co_4->x; j++)
			place_element(c_4_map, co_4, i, j);
		if (i != co_4->y - 1)
			c_4_map[i][j] = '\n';
		c_4_map[i][j + 1] = '\0';
	}
	if (co_4->check_enough < 20) {
		write(1, "Error: not enough slot on the board", 35);
		exit(84);
	}
	c_4_map[i] = NULL;
}
