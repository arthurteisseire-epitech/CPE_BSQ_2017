/*
** EPITECH PROJECT, 2017
** File Name : fill.c
** File description:
** By Arthur Teisseire
*/

#include "bsq.h"
#include "my.h"

int get_nb_row(int *fd)
{
	int i = 0;
	char buffer[11];

	while (my_read(*fd, &buffer[i], 1) && buffer[i] != '\n')
		i++;
	buffer[i] = '\0';
	return (my_atoi(buffer));
}

void fill_map(char *map, int *fd)
{
	int size;
	char buffer[SIZE];

	while ((size = my_read(*fd, buffer, SIZE)) != 0)
		map = concat(map, buffer);
}

char *concat(char *str1, char *str2)
{
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	char *res = malloc(sizeof(char) * (len1 + len2 + 1));
	int i = 0;

	while (*str1 != '\0') {
		res[i] = *str1;
		str1++;
		i++;
	}
	while (*str2 != '\0') {
		res[i] = *str2;
		str2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
