/*
** EPITECH PROJECT, 2017
** File Name : bsq.h
** File description:
** By Arthur Teisseire
*/

#ifndef BSQ_H
#define BSQ_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SIZE 20

typedef struct pos {
	int x;
	int y;
} pos_t;

typedef struct bsq {
	char **map;
	int nb_col;
	int nb_row;
	int size;
	pos_t pos;
} bsq_t;

void local_bsq(bsq_t *bsq, int row, int col);
void set_pos(pos_t *pos, int row, int col);

int my_open(char const *filepath);
void cat_x_bytes(int fd, int x);
int my_read(int fd, char *buffer, int size);
int get_nb_row(int *fd);
char *fill_map(int *fd);
char *concat(char *str1, char *str2, int len_src);

#endif
