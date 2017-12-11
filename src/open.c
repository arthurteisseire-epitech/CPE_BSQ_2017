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
