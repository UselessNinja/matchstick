/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** My ai is here to kick your ass and chew bubblegum.
*/

#include "../../include/my.h"

char **ai_turn(char **map, int size, int mmpt)
{
	t_matchstick game;

	my_putstr("AI's turn...\n");
	do {
		do {
			game.rm_from_line = random()/1000000;
		} while (is_this_legal_line_bot(game.rm_from_line, size) != 0);
		game.rm_matches = random()/1000000;
		game.rem_matches = count_matches(game.rm_from_line, map);
	} while (is_this_legal_matches_bot(game.rm_matches, mmpt, game.rem_matches) != 0);
	my_putstr("AI removed ");
	my_put_nbr(game.rm_matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(game.rm_from_line);
	my_putchar('\n');
	map = remove_matches(game.rm_matches, game.rm_from_line, map);
	display_map(map);
	return (map);
}

int is_this_legal_line_bot(int line, int size)
{
	if (line < 0)
		return (84);
	if (line == 0 || line > size)
		return (84);
	return (0);
}

int is_this_legal_matches_bot(int matches, int mmpt, int remaining_matches)
{
	if (matches < 0)
		return (84);
	if (matches == 0)
		return (84);
	if (matches > mmpt)
		return (84);
	if (matches > remaining_matches)
		return (84);
	return (0);
}

int safe_random(int size)
{
	int z = rand();

	while (z > 0 && z < size)
		z = rand();
	return (z);
}