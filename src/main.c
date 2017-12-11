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

	if (ac != 2)
		return (84);
	bsq.nb_row = my_atoi(av[1]);
	return (0);
}
