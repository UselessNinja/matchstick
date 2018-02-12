/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** macros and stuff
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "../lib/my/my.h"

typedef struct matchstick
{
	int rm_matches;
	int rm_from_line;
	int rem_matches;
} t_matchstick;

char **generate_map(int size);
char **generate_matches(int size, char **map);
char **malloc_map(int size);
void display_map(char **map);
void free_map(char **map, int size);
int matchstick(char **map, int size, int mmpt);
int lose_condition(char **map);
char **player_turn(char **map, int size, int mmpt);
char **ai_turn(char **map, int size, int mmpt);
int player_input(int *result);
int is_this_legal_line(int line, int size);
int is_this_legal_matches(int matches, int mmpt, int remaining_matches);
void is_this_legal_matches_bis(void);
char **remove_matches(int matches, int line, char **map);
int count_matches(int line, char **map);
int is_this_legal_line_bot(int line, int size);
int is_this_legal_matches_bot(int matches, int mmpt, int remaining_matches);
int safe_random(int size);

#endif /* !MY_H_ */