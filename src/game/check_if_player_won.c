/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** functions that check if the player in question won
*/

#include <stdlib.h>
#include "../../include/my_printf.h"
#include "../../include/my_sokoban.h"
#include "../../include_connect_4/connect_4.h"

extern void check_down_right(co_4_t *co_4, char p_avatar, int y)
{
	char **c_4_map = co_4->c_4_map;
	int p_column = co_4->p_column;
	char referee = co_4->param_val.referee_opt;

	if (c_4_map[y + 1][p_column + 1] == p_avatar)
		if (c_4_map[y + 2][p_column + 2] == p_avatar
		&& c_4_map[y + 3][p_column + 3] == p_avatar) {
			c_4_map[y][p_column] = referee;
			c_4_map[y + 1][p_column + 1] = referee;
			c_4_map[y + 2][p_column + 2] = referee;
			c_4_map[y + 3][p_column + 3] = referee;
			to_print_2d_array_dynamic(co_4->c_4_map);
			my_printf("\nCongrats, player %c won!", p_avatar);
			exit(0);
		}
}

extern void check_down_left(co_4_t *co_4, char p_avatar, int y)
{
	char **c_4_map = co_4->c_4_map;
	int p_column = co_4->p_column;
	char referee = co_4->param_val.referee_opt;

	if (c_4_map[y + 1][p_column - 1] == p_avatar)
		if (c_4_map[y + 2][p_column - 2] == p_avatar
		&& c_4_map[y + 3][p_column - 3] == p_avatar) {
			c_4_map[y][p_column] = referee;
			c_4_map[y + 1][p_column - 1] = referee;
			c_4_map[y + 2][p_column - 2] = referee;
			c_4_map[y + 3][p_column - 3] = referee;
			to_print_2d_array_dynamic(co_4->c_4_map);
			my_printf("\nCongrats, player %c won!", p_avatar);
			exit(0);
		}
}

extern void check_left(co_4_t *co_4, char p_avatar, int y)
{
	char **c_4_map = co_4->c_4_map;
	int p_column = co_4->p_column;
	char referee = co_4->param_val.referee_opt;

	if (c_4_map[y][p_column - 1] == p_avatar)
		if (c_4_map[y][p_column - 2] == p_avatar
		&& c_4_map[y][p_column - 3] == p_avatar) {
			c_4_map[y][p_column] = referee;
			c_4_map[y][p_column - 1] = referee;
			c_4_map[y][p_column - 2] = referee;
			c_4_map[y][p_column - 3] = referee;
			to_print_2d_array_dynamic(co_4->c_4_map);
			my_printf("\nCongrats, player %c won!", p_avatar);
			exit(0);
		}
}

extern void check_right(co_4_t *co_4, char p_avatar, int y)
{
	char **c_4_map = co_4->c_4_map;
	int p_column = co_4->p_column;
	char referee = co_4->param_val.referee_opt;

	if (c_4_map[y][p_column + 1] == p_avatar)
		if (c_4_map[y][p_column + 2] == p_avatar
		&& c_4_map[y][p_column + 3] == p_avatar) {
			c_4_map[y][p_column] = referee;
			c_4_map[y][p_column + 1] = referee;
			c_4_map[y][p_column + 2] = referee;
			c_4_map[y][p_column + 3] = referee;
			to_print_2d_array_dynamic(co_4->c_4_map);
			my_printf("\nCongrats, player %c won!", p_avatar);
			exit(0);
		}
}

extern void check_down(co_4_t *co_4, char p_avatar, int y)
{
	char **c_4_map = co_4->c_4_map;
	int p_column = co_4->p_column;
	char referee = co_4->param_val.referee_opt;

	if (c_4_map[y + 1][p_column] == p_avatar)
		if (c_4_map[y + 2][p_column] == p_avatar
		&& c_4_map[y + 3][p_column] == p_avatar) {
			c_4_map[y][p_column] = referee;
			c_4_map[y + 1][p_column] = referee;
			c_4_map[y + 2][p_column] = referee;
			c_4_map[y + 3][p_column] = referee;
			to_print_2d_array_dynamic(co_4->c_4_map);
			my_printf("\nCongrats, player %c won!", p_avatar);
			exit(0);
		}
}
