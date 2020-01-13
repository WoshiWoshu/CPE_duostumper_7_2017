/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** player add his avatar to the map
*/

#include "../../include_connect_4/connect_4.h"

static void check_if_player_won(co_4_t *co_4, char p_avatar, int y)
{
	check_down(co_4, p_avatar, y);
	check_right(co_4, p_avatar, y);
	check_left(co_4, p_avatar, y);
	check_down_left(co_4, p_avatar, y);
	check_down_right(co_4, p_avatar, y);
}

extern void p_add_symbol_to_map(co_4_t *co_4, char p_avatar)
{
	char **c_4_map = co_4->c_4_map;
	int y = (co_4->param_val.height_opt);
	int p_column = co_4->p_column;

	while (c_4_map[y][p_column] != '.' && y > 0)
		--y;
	if (y == 0) {
		c_4_map[y][p_column] = '+';
		ask_player_column(co_4, p_avatar);
		p_add_symbol_to_map(co_4, p_avatar);
	} else
		c_4_map[y][p_column] = p_avatar;
	check_if_player_won(co_4, p_avatar, y);
}
