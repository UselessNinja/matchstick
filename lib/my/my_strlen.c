/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** Pourquoi j'ai effacé celui de la piscine ?
*/

#include "my.h"

int my_strlen(char *str)
{
	int len = 0;

	if (str)
		while (str[len] != '\0')
			len++;
	return (len);
}
