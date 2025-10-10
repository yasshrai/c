#ifndef BFS_H
#define BFS_H

#include "queue.h"

void bfs(int startRow, int startColumn, int totalRow, int totalColumn,
         struct node **head, struct node **tail, int *matrix, int *visited);

#endif