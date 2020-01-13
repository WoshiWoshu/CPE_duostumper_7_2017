/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** functions that check if the map is filled
*/

#include <stdlib.h>
#include <string.h>
#include "../../include/my.h"
#include "../../include/my_sokoban.h"
#include "../../include_connect_4/connect_4.h"

static int check_if_it_is_a_tie(co_4_t *co_4, int i, int j, int detect)
{
	if (co_4->c_4_map[i][j] == '.')
		detect++;
	return (detect);
}

extern void browse_if_it_is_a_tie(co_4_t *co_4)
{
	int i = 0;
	int j = 0;
	int detect = 0;

	for (i = 0; i < co_4->y; ++i) {
		for (j = 0; j < co_4->x; j++)
			detect = check_if_it_is_a_tie(co_4, i, j, detect);
	}
	if (detect == 0) {
		to_print_2d_array_dynamic(co_4->c_4_map);
		my_putstr("\nIt's a tie, nobody wins.");
		exit(0);
	}
}
