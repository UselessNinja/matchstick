/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** Matchstick now available on MSDOS
*/

#include "../include/my.h"

int main(int ac, char **av)
{
	int size;
	int mmpt;
	char **map;

	if (ac != 3)
		return (84);
	size = my_getnumber(av[1]);
	mmpt = my_getnumber(av[2]);
	if (size == 0)
		return (84);
	if (size < 1 || size > 99)
		return (84);
	if (mmpt == 0 && mmpt < 1)
		return (84);
	map = generate_map(size);
	map = generate_matches(size, map);
	display_map(map);
	mmpt = matchstick(map, size, mmpt);
	if (mmpt == 84)
		return (0);
	free_map(map, size);
	return (mmpt);
}
