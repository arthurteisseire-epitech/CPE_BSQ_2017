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
	/*
	char buffer[4096];
	int size;
	int fd;
	bsq_t bsq;
	*/

	if (ac != 2)
		return (84);
	fs_open_file(av[1]);
	return (0);
}
