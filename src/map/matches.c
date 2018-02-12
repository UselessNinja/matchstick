/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** What is the point of the map if it doesn't get updated /s !
*/

#include "../../include/my.h"

int count_matches(int line, char **map)
{
	int count = 0;
	int i;

	for (i = 0; map[line][i] != '\0'; i++)
		if (map[line][i] == '|')
			count++;
	return (count);
}

char **remove_matches(int matches, int line, char **map)
{
	int count;

	for (count = my_strlen(map[line]); count != 0; count--) {
		if (map[line][count] == '|' && matches != 0) {
			map[line][count] = ' ';
			matches--;
		}
		if (matches == 0)
			return (map);
	}
	return (NULL);
}

int lose_condition(char **map)
{
	int y_axis = 1;

	for (y_axis = 1; map[y_axis] != NULL; y_axis++) {
		if (count_matches(y_axis, map) != 0)
			return (84);
	}
	return (0);
}