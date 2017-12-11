/*
** EPITECH PROJECT, 2017
** File Name : open.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "bsq.h"

int fs_open_file(char const *filepath)
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

void fs_cat_x_bytes(char const *filepath, int x)
{
	int fd;
	char buffer[x];

	fd = fs_open_file(filepath);
	my_read(fd, buffer, x);
	my_putstr(buffer);
}
