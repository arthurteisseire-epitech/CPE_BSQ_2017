/*
** EPITECH PROJECT, 2017
** File Name : open.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "bsq.h"

int my_open(char const *filepath)
{
	int fd = open(filepath, O_RDONLY);

	if (fd == -1) {
		my_puterror("Error when opening file\n");
		exit(84);
	}
	return (fd);
}

int my_read(int fd, char *buffer, int size)
{
	int state = read(fd, buffer, size); 

	if (state == -1) {
		my_puterror("Error when reading file\n");
		exit(84);
	}
	return (state);
}

void cat_x_bytes(int fd, int x)
{
	char buffer[x];

	my_read(fd, buffer, x);
	my_putstr(buffer);
}

void cat_first_line(char const *filepath, int fd)
{
	int i = 0;

	while (filepath[i] != '\n' && filepath[i] != '\0')
		i++;
	cat_x_bytes(fd, i);
}
