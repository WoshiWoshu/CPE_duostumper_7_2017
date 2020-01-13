##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC	=	gcc -g3 -Wall -Wextra

FLAG	=	-I /include

RM	=	rm -f

SRC	=	./src/core/parse_opt.c				\
		./src/core/init_var.c				\
		./src/create_map/create_map.c			\
		./src/game/ask_player_column.c			\
		./src/game/player_add_symbol_to_map.c		\
		./src/game/check_if_player_won.c		\
		./src/game/check_if_it_is_a_tie.c		\
		./src/connect_4.c

OBJ	=	$(SRC:.c=.o)

NAME	=	connect4

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./libmy
	$(CC) $(OBJ) -o $(NAME) -L ./libmy -l my

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	make -C libmy fclean
	$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all fclean clean re
