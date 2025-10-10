#include <stdio.h>
#include "matrix.h"

void makeVoid(int rows, int cols, int *visited)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            visited[cols * i + j] = 0;
}

void createMatrix(int rows, int cols, int *matrix)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &matrix[cols * i + j]);
        }
}

void display(int rows, int cols, int *matrix)
{
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[cols * i + j]);
        printf("\n");
    }
}
