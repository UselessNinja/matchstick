/*
** EPITECH PROJECT, 2017
** Matchstick
** File description:
** Leak-buster 9000 !
*/

#include "../../include/my.h"

void free_map(char **map, int size)
{
	int count;

	free(map[0]);
	for (count = 1; count < (size + 2); count++)
		free(map[count]);
	free(map);
}