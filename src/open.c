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

int get_first_line(char const *filepath)
{
	int i = 0;
	int fd = my_open(filepath);
	char buffer[4096];

	while ((my_read(fd, &buffer[i], 1)) && buffer[i] != '\n')
		i++;
	close(fd);
	buffer[i] = '\0';
	return (my_atoi(buffer));
}
