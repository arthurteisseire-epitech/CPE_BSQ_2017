/*
** EPITECH PROJECT, 2017
** File Name : local_bsq.c
** File description:
** By Arthur Teisseire
*/

#include "bsq.h"

void local_bsq(bsq_t *bsq, int row, int col)
{
	int size;
	int size_y = bsq->nb_col;
	int x = row;
	int y = col;

	while (x < bsq->nb_row && bsq->map[x][y] != 'o') {
		while (bsq->map[x][y] == '.')
			y++;
		if (y - col < bsq->size)
			return;
		if (y - col < size_y)
			size_y = y - col;
		x++;
		y = col;
	}
	size = (size_y < x - row ? size_y : x - row);
	if (size > bsq->size) {
		bsq->size = size;
		set_pos(&bsq->pos, row, col);
	}
}

void set_pos(pos_t *pos, int row, int col)
{
	pos->x = row;
	pos->y = col;
}
