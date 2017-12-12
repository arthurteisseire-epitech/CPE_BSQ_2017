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
		find_biggest_square(bsq, row);
	put_x_square(bsq);
}

void find_biggest_square(bsq_t *bsq, int row)
{
	for (int col = 0; col < bsq->nb_col; col++)
		if (bsq->map[row][col] == '.')
			local_bsq(bsq, row, col);
}

void put_x_square(bsq_t *bsq)
{
	for (int x = bsq->pos.x; x < bsq->pos.x + bsq->size; x++)
		for (int y = bsq->pos.y; y < bsq->pos.y + bsq->size; y++)
			bsq->map[x][y] = 'x';
}
