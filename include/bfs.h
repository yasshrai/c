#ifndef BFS_H
#define BFS_H

#include "queue.h"

/**
 * Performs a Breadth-First Search (BFS) traversal on a 2D matrix.
 *
 * @param startRow      The starting row index for the BFS.
 * @param startColumn   The starting column index for the BFS.
 * @param totalRow      Total number of rows in the matrix.
 * @param totalColumn   Total number of columns in the matrix.
 * @param head          Pointer to the head of the BFS queue.
 * @param tail          Pointer to the tail of the BFS queue.
 * @param matrix        Pointer to the matrix (flattened into a 1D array).
 * @param visited       Pointer to an array marking visited cells (same size as matrix).
 *
 * This function explores the matrix level by level (row-column order),
 * using a queue to store the next cells to visit. Each cell is processed once,
 * and its unvisited, valid neighbors are enqueued for future exploration.
 *
 * Typical usage:
 *  - Initialize the queue with the starting cell.
 *  - Mark it as visited.
 *  - Repeatedly dequeue a cell, process it, and enqueue its neighbors.
 */
void bfs(int startRow, int startColumn, int totalRow, int totalColumn,
         struct node **head, struct node **tail, int *matrix, int *visited);

#endif 
