/*
** EPITECH PROJECT, 2017
** File Name : array.c
** File description:
** By Arthur Teisseire
*/

#include "bsq.h"
#include "my.h"

char **str_to_map(bsq_t *bsq, char *str)
{
	char **map;
	int curr_line;
	int col;
	int row = 0;

	bsq->nb_col = get_len_line(str);
	map = malloc(sizeof(char *) * bsq->nb_row);
	while (row < bsq->nb_row) {
		map[row] = malloc(sizeof(char) * (bsq->nb_col + 1));
		curr_line = row * (bsq->nb_col + 1);
		col = 0;
		while (col < bsq->nb_col) {
			map[row][col] = str[curr_line + col];
			col++;
		}
		map[row][col] = '\0';
		row++;
	}
	return (map);
}

int get_len_line(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void print_map(bsq_t *bsq)
{
	for (int row = 0; row < bsq->nb_row; row++) {
		my_putstr(bsq->map[row]);
		my_putchar('\n');
	}
}
