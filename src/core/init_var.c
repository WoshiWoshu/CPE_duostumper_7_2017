/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** init the var
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include_connect_4/connect_4.h"

extern void init_var_opt(co_4_t *co_4)
{
	co_4->param_val.width_opt = 0;
	co_4->param_val.height_opt = 0;
	co_4->param_val.p_1_opt = 0;
	co_4->param_val.p_2_opt = 0;
	co_4->param_val.referee_opt = 0;
	return;
}

extern void init_main_var(co_4_t *co_4)
{
	int y = co_4->param_val.height_opt;
	int x = co_4->param_val.width_opt;

	co_4->c_4_map = malloc(sizeof(char *) * y * x);
	co_4->x = (co_4->param_val.width_opt) + 2;
	co_4->y = (co_4->param_val.height_opt) + 2;
	co_4->p_column = 0;
	co_4->check_enough = 0;
	return;
}

extern void check_corrupt_symbol(co_4_t *co_4)
{
	if ((co_4->param_val.referee_opt ==
	co_4->param_val.p_1_opt)
	|| (co_4->param_val.referee_opt ==
	co_4->param_val.p_2_opt)
	|| (co_4->param_val.p_1_opt ==
	co_4->param_val.p_2_opt)) {
		write(2, "Error: identicals avatars(symbols) found", 40);
		exit(84);
	}
}

extern void default_var(co_4_t *co_4)
{
	if (co_4->param_val.width_opt == 0)
		co_4->param_val.width_opt = 7;
	if (co_4->param_val.height_opt == 0)
		co_4->param_val.height_opt = 6;
	if (co_4->param_val.p_1_opt == 0)
		co_4->param_val.p_1_opt = 'X';
	if (co_4->param_val.p_2_opt == 0)
		co_4->param_val.p_2_opt = 'O';
	if (co_4->param_val.referee_opt == 0)
		co_4->param_val.referee_opt = '#';
	return;
}
