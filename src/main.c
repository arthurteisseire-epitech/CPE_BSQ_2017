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
	char buffer[SIZE];
	int fd = my_open(av[1]);

	if (ac != 2)
		return (84);
	bsq.nb_row = get_nb_row(&fd);
	//printf("%d", bsq.nb_row);
	my_read(fd, buffer, SIZE);
	my_putstr(buffer);
	close(fd);
	return (0);
}
