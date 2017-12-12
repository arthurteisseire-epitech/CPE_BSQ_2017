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

char *fill_map(int *fd)
{
	int size;
	char *map = "";
	char *tmp;
	char buffer[SIZE];

	while ((size = my_read(*fd, buffer, SIZE)) != 0) {
		tmp = map;
		map = concat(map, buffer, size);
		if (*tmp != '\0')
			free(tmp);
	}
	return (map);
}

char *concat(char *dest, char *src, int len_src)
{
	int len_dest = my_strlen(dest);
	char *res = malloc(sizeof(char) * (len_dest + len_src + 1));
	int i = 0;

	src[len_src - 1] = '\0';
	my_strcpy(res, src);
	while (i < len_src) {
		res[len_dest + i] = src[i];
		i++;
	}
	res[len_dest + i] = '\0';
	return (res);
}
