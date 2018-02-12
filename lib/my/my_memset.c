/*
** EPITECH PROJECT, 2017
** my_memset
** File description:
** Now you can fill memory too !
*/

char *my_memset(char *str, char c, int size)
{
	int count;

	for (count = 0; count < size; count++)
		str[count] = c;
	str[count] = '\0';
	return (str);
}