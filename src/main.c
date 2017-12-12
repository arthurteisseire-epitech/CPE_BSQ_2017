/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "bsq.h"

int main(int ac, char **av)
{
	bsq_t bsq;
	int fd = my_open(av[1]);

	if (ac != 2)
		return (84);
	bsq.nb_row = get_nb_row(av[1]);
	printf("%d", bsq.nb_row);
	close(fd);
	return (0);
}
