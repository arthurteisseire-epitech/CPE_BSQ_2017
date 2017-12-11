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
	int fd = my_open(av[1]);

	if (ac != 2)
		return (84);
	cat_first_line(av[1], fd);
	close(fd);
	return (0);
}
