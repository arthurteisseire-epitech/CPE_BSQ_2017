/*
** EPITECH PROJECT, 2017
** File Name : free.c
** File description:
** By Arthur Teisseire
*/

#include "bsq.h"

void free_all(bsq_t *bsq, char *content)
{
	for (int i = 0; i < bsq->nb_row; i++)
		free(bsq->map[i]);
	free(bsq->map);
	free(content);
}
