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
