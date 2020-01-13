/*
** EPITECH PROJECT, 2018
** connec_4
** File description:
** connect_4 header
*/

#ifndef _CONNECT_4_H_
#define _CONNECT_4_H_

typedef struct param_val_s param_val_t;

struct param_val_s {
	unsigned int width_opt;
	unsigned int height_opt;
	char referee_opt;
	char p_1_opt;
	char p_2_opt;
};

typedef struct co_4_s {
	param_val_t param_val;
	char **c_4_map;
	int x;
	int y;
	int p_column;
	int check_enough;
} co_4_t;

extern void parse_opt_param(char **av, co_4_t *co_4);
extern void init_var_opt(co_4_t *co_4);
extern void init_main_var(co_4_t *co_4);
extern void check_corrupt_symbol(co_4_t *co_4);
extern void default_var(co_4_t *co_4);
extern void create_map(co_4_t *co_4);
extern void ask_player_column(co_4_t *co_4, char p_avatar);
extern void p_add_symbol_to_map(co_4_t *co_4, char p_avatar);
extern void check_down_right(co_4_t *co_4, char p_avatar, int y);
extern void check_down_left(co_4_t *co_4, char p_avatar, int y);
extern void check_left(co_4_t *co_4, char p_avatar, int y);
extern void check_right(co_4_t *co_4, char p_avatar, int y);
extern void check_down(co_4_t *co_4, char p_avatar, int y);
extern void browse_if_it_is_a_tie(co_4_t *co_4);

#endif /* _CONNECT_4_H_ */
