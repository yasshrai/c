#include <stdio.h>
#include "dfs.h"

void dfs(int row, int col, int trow, int tcol, int *matrix, int *visited) {
    if (row < 0 || row >= trow || col < 0 || col >= tcol || visited[tcol*row + col])
        return;

    printf("Visited: %d\n", matrix[tcol*row + col]);
    visited[tcol*row + col] = 1;

    int direction[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

    for (int i = 0; i < 4; i++) {
        int newRow = row + direction[i][0];
        int newCol = col + direction[i][1];
        dfs(newRow, newCol, trow, tcol, matrix, visited);
    }
}
