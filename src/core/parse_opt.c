/*
** EPITECH PROJECT, 2018
** duo_stumper_7
** File description:
** function that parse the arg of the main
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../include_connect_4/connect_4.h"

static void get_opt_symbol(char **av, co_4_t *co_4, int i)
{
	if (strcmp(av[i], "-p1") == 0 && av[i + 1] != NULL)
		co_4->param_val.p_1_opt = av[i + 1][0];
	if (strcmp(av[i], "-p2") == 0 && av[i + 1] != NULL)
		co_4->param_val.p_2_opt = av[i + 1][0];
	if (strcmp(av[i], "-a") == 0 && av[i + 1] != NULL)
		co_4->param_val.referee_opt = av[i + 1][0];
}

static void check_error_opt_symbol(char **av, int i)
{
	if (((strcmp(av[i], "-p1") == 0 && av[i + 1] == NULL)
	|| (strcmp(av[i], "-p1") == 0 && strlen(av[i + 1]) > 1))) {
		write(2,
		"Error: -p1 require only a single argument", 41);
		exit(84);
	}
	if (((strcmp(av[i], "-p2") == 0 && av[i + 1] == NULL)
	|| (strcmp(av[i], "-p2") == 0 && strlen(av[i + 1]) > 1))) {
		write(2,
		"Error: -p2 require only a single argument", 41);
		exit(84);
	}
	if (((strcmp(av[i], "-a") == 0 && av[i + 1] == NULL)
	|| (strcmp(av[i], "-a") == 0 && strlen(av[i + 1]) > 1))) {
		write(2,
		"Error: -a require only a single argument", 40);
		exit(84);
	}
}

static void get_opt_dimension(char **av, co_4_t *co_4, int i)
{
	if (strcmp(av[i], "-w") == 0 && av[i + 1] != NULL)
		co_4->param_val.width_opt = atoi(av[i + 1]);
	if (strcmp(av[i], "-h") == 0 && av[i + 1] != NULL)
		co_4->param_val.height_opt = atoi(av[i + 1]);
}

static void check_error_opt_dimension(char **av, co_4_t *co_4, int i)
{
	if (strcmp(av[i], "-w") == 0 && av[i + 1] == NULL) {
		write(2, "Error: -w require an argument", 29);
		exit(84);
	}
	if ((strcmp(av[i], "-w") == 0 && co_4->param_val.width_opt <= 0)
	|| (strcmp(av[i], "-w") == 0 && co_4->param_val.width_opt > 80)) {
		write(2, "Error: number of columns out of range", 37);
		exit(84);
	}
	if (strcmp(av[i], "-h") == 0 && av[i + 1] == NULL) {
		write(2, "Error: -h require an argument", 29);
		exit(84);
	}
	if ((strcmp(av[i], "-h") == 0 && co_4->param_val.height_opt <= 0)
	|| (strcmp(av[i], "-h") == 0 && co_4->param_val.height_opt > 16)) {
		write(2, "Error: number of rows out of range", 35);
		exit(84);
	}
}

extern void parse_opt_param(char **av, co_4_t *co_4)
{
	for (int i = 0; av[i] != NULL; ++i) {
		get_opt_symbol(av, co_4, i);
		check_error_opt_symbol(av, i);
		get_opt_dimension(av, co_4, i);
		check_error_opt_dimension(av, co_4 , i);
	}
}
