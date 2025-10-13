#ifndef DFS_H
#define DFS_H

/**
 * Performs a Depth-First Search (DFS) traversal on a 2D matrix.
 *
 * @param row       Current row index in the matrix.
 * @param col       Current column index in the matrix.
 * @param trow      Target row index (for destination checking).
 * @param tcol      Target column index (for destination checking).
 * @param matrix    Pointer to the matrix (stored as a 1D array).
 * @param visited   Pointer to an array tracking visited cells (same size as matrix).
 *
 * The function typically explores adjacent cells recursively
 * (e.g., up, down, left, right) to find a path from (row, col) to (trow, tcol),
 * marking visited cells along the way.
 */
void dfs(int row, int col, int trow, int tcol, int *matrix, int *visited);

#endif
