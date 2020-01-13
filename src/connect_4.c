/*
** EPITECH PROJECT, 2018
** connect_4
** File description:
** connect_4 main functions
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/my_sokoban.h"
#include "../include_connect_4/connect_4.h"

static void player_2(co_4_t *co_4, char avatar)
{
	ask_player_column(co_4, avatar);
	p_add_symbol_to_map(co_4, avatar);
	browse_if_it_is_a_tie(co_4);
	to_print_2d_array_dynamic(co_4->c_4_map);
	my_putchar('\n');
}

static void player_1(co_4_t *co_4, char avatar)
{
	ask_player_column(co_4, avatar);
	p_add_symbol_to_map(co_4, avatar);
	browse_if_it_is_a_tie(co_4);
	to_print_2d_array_dynamic(co_4->c_4_map);
	my_putchar('\n');
}

static void driver(char **av, co_4_t *co_4)
{
	init_var_opt(co_4);
	parse_opt_param(av, co_4);
	default_var(co_4);
	check_corrupt_symbol(co_4);
	init_main_var(co_4);
	create_map(co_4);
	for (;;) {
		player_1(co_4, co_4->param_val.p_1_opt);
		player_2(co_4, co_4->param_val.p_2_opt);
	}
	free(co_4->c_4_map);
}

int main(int ac, char **av)
{
	co_4_t co_4;

	(void)ac;
	driver(av, &co_4);
	return (0);
}
