/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** J'aime la piscine !
*/

#include "my.h"

char *my_strcat(char *output, char const *input)
{
	int len = my_strlen(output);
	int count;

	for (count = 0; input[count] != '\0'; count++)
		output[len + count] = input[count];
	output[len + count] = '\0';
	return (output);
}

char *my_strcat_read(char *output, char input)
{
	int len = my_strlen(output);

	output[len] = input;
	output[len + 1] = '\0';
	return (output);
}