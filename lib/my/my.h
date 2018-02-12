/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** macro for the lib
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_getnumber(char *str);
char *my_memset(char *str, char c, int size);
int my_getread(char *str);
char *my_strcat(char *output, char const *input);
int my_strlen(char *str);
void *my_realloc(void *ptr, size_t size);
void *my_memcpy(void *dest, const void *src, size_t size);
char *my_strcat_read(char *output, char input);
char *my_realloc_toread(char *str, char c);

#endif /* MY_H */