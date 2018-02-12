/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** The game itself, scheduled for 1983 on MS-DOS !
*/

#include "../../include/my.h"

int matchstick(char **map, int size, int mmpt)
{
	while (1337) {
		map = player_turn(map, size, mmpt);
		if (map == NULL)
			return (84);
		if (lose_condition(map) == 0) {
			my_putstr("You lost, too bad...\n");
			return (2);
		}
		map = ai_turn(map, size, mmpt);
		if (map == NULL)
			return (84);
		if (lose_condition(map) == 0) {
			my_putstr("I lost... snif... but I'll get you next time!!\n");
			return (1);
		}
	}
}
