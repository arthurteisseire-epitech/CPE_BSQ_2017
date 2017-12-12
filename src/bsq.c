/*
** EPITECH PROJECT, 2017
** File Name : bsq.c
** File description:
** By Arthur Teisseire
*/

#include "bsq.h"

void my_bsq(bsq_t *bsq)
{
	bsq->size = 0;

	for (int row = 0; row < bsq->nb_row; row++)
		for (int col = 0; col < bsq->nb_col; col++)
			local_bsq(bsq, row, col);
	put_x_square(bsq);
}

void put_x_square(bsq_t *bsq)
{
	for (int x = bsq->pos.x; x < bsq->size; x++)
		for (int y = bsq->pos.y; y < bsq->size; y++)
			bsq->map[x][y] = 'x';
}
