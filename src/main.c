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
	if (ac != 2)
		return (84);
	fs_cat_x_bytes(av[1], 18);
	return (0);
}
