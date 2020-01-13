/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** functions that ask the player the number of the column
*/

#include <stdlib.h>
#include "../../include/my_printf.h"
#include "../../include/get_next_line.h"
#include "../../include_connect_4/connect_4.h"

extern void ask_player_column(co_4_t *co_4, char p_avatar)
{
	char *p_column = NULL;
	int x = co_4->param_val.width_opt;

	my_printf("Player %c, where do you want to play: ", p_avatar);
	p_column = get_next_line(0);
	if (p_column == NULL)
		exit(0);
	co_4->p_column = atoi(p_column);
	if (co_4->p_column <= 0 || co_4->p_column > x)
		ask_player_column(co_4, p_avatar);
}
