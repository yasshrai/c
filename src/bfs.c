#include <stdio.h>
#include <stdlib.h>
#include "bfs.h"
#include "queue.h"

void bfs(int startRow, int startColumn, int totalRow, int totalColumn,
         struct node** head, struct node** tail, int* matrix, int* visited) {

    visited[totalColumn * startRow + startColumn] = 1;
    append(head, tail, startRow, startColumn);

    int direction[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

    while (*head != NULL) {
        int currentRow = (*head)->row;
        int currentColumn = (*head)->column;
        popleft(head, tail);

        printf("Visited (%d, %d): %d\n", currentRow, currentColumn,
               matrix[totalColumn * currentRow + currentColumn]);

        for (int i = 0; i < 4; i++) {
            int newRow = currentRow + direction[i][0];
            int newColumn = currentColumn + direction[i][1];

            if (newRow >= 0 && newColumn >= 0 &&
                newRow < totalRow && newColumn < totalColumn &&
                visited[totalColumn * newRow + newColumn] == 0) {

                append(head, tail, newRow, newColumn);
                visited[totalColumn * newRow + newColumn] = 1;
            }
        }
    }
}