/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "bsq.h"
#include <stdio.h>

int main(int ac, char **av)
{
	bsq_t bsq;
	char *content;
	int fd = my_open(av[1]);

	if (ac != 2)
		return (84);
	bsq.nb_row = get_nb_row(&fd);
	content = get_file_content(fd);
	bsq.map = str_to_map(&bsq, content);
	print_map(&bsq);
	free(content);
	close(fd);
	return (0);
}
