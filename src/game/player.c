/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** Oh, anon it's your turn to play !
*/

#include "../../include/my.h"

char **player_turn(char **map, int size, int mmpt)
{
	t_matchstick game;

	my_putstr("Your turn:\n");
	do {
		do {
			my_putstr("Line: ");
			if (player_input(&game.rm_from_line) == 84)
				return (NULL);
		} while (is_this_legal_line(game.rm_from_line, size) != 0);
		my_putstr("Matches: ");
		if (player_input(&game.rm_matches) == 84)
			return (NULL);
		game.rem_matches = count_matches(game.rm_from_line, map);
	} while (is_this_legal_matches(game.rm_matches, mmpt, game.rem_matches) != 0);
	my_putstr("Player removed ");
	my_put_nbr(game.rm_matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(game.rm_from_line);
	my_putchar('\n');
	map = remove_matches(game.rm_matches, game.rm_from_line, map);
	display_map(map);
	return (map);
}

int player_input(int *result)
{
	char buffer;
	char *input = malloc(sizeof(char));
	int safe;

	input[0] = '\0';
	for (buffer = '\0'; buffer != '\n'; buffer = buffer) {
		buffer = '\0';
		safe = read(0, &buffer, 1);
		input = my_realloc_toread(input, buffer);
		if (safe == 0)
			return (84);
	}
	*result = my_getread(input);
	free(input);
	return (0);
}

int is_this_legal_line(int line, int size)
{
	if (line < 0) {
		my_putstr("Error: ");
		my_putstr("invalid output (positive number expected)\n");
		return (84);
	}
	if (line == 0 || line > size) {
		my_putstr("Error: ");
		my_putstr("this line is out of range\n");
		return (84);
	}
	return (0);
}

int is_this_legal_matches(int matches, int mmpt, int remaining_matches)
{
	if (matches < 0) {
		my_putstr("Error: ");
		my_putstr("invalid output (positive number expected)\n");
		return (84);
	}
	if (matches == 0) {
		my_putstr("Error: ");
		my_putstr("you have to remove at least one match\n");
		return (84);
	}
	if (matches > mmpt) {
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(mmpt);
		my_putstr(" matches per turn\n");
		return (84);
	}
	if (matches > remaining_matches) {
		is_this_legal_matches_bis();
		return (84);
	}
	return (0);
}

void is_this_legal_matches_bis(void)
{
	my_putstr("Error: ");
	my_putstr("not enough matches on this line\n");
}