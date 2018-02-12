/*
** EPITECH PROJECT, 2017
** Matchstick
** File description:
** Displays the map !
*/

#include "../../include/my.h"

void display_map(char **map)
{
	int count;

	for (count = 0; map[count] != NULL; count++) {
		my_putstr(map[count]);
		my_putchar('\n');
	}
	my_putchar('\n');
}
