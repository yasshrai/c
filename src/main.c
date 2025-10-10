#include <stdio.h>
#include "dfs.h"
#include "bfs.h"
#include "queue.h"
#include "matrix.h"

int main(void)
{
    int matrix[3][3];
    int visited[3][3];
    struct node *head = NULL;
    struct node *tail = NULL;

    // Step 1: Read matrix from user
    printf("Enter elements for a 3x3 matrix:\n");
    createMatrix(3, 3, (int *)matrix);

    // Step 2: Display the matrix
    printf("\nYou entered the following matrix:\n");
    display(3, 3, (int *)matrix);

    // Step 3: Perform DFS Traversal
    makeVoid(3, 3, (int *)visited);

    dfs(0, 0, 3, 3, (int *)matrix, (int *)visited);

    // Step 4: Perform BFS Traversal
    makeVoid(3, 3, (int *)visited);

    bfs(0, 0, 3, 3, &head, &tail, (int *)matrix, (int *)visited);

    return 0;
}
