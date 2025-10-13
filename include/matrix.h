#ifndef MATRIX_H
#define MATRIX_H

/**
 * Initializes a "visited" matrix with all entries set to 0.
 *
 * @param rows      Number of rows in the matrix
 * @param cols      Number of columns in the matrix
 * @param visited   Pointer to the visited matrix (flattened 1D array)
 */
void makeVoid(int rows, int cols, int *visited);

/**
 * Fills a matrix with values (e.g., from user input or random generation).
 *
 * @param rows      Number of rows in the matrix
 * @param cols      Number of columns in the matrix
 * @param matrix    Pointer to the matrix (flattened 1D array)
 */
void createMatrix(int rows, int cols, int *matrix);

/**
 * Displays the matrix in a readable row-column format.
 *
 * @param rows      Number of rows in the matrix
 * @param cols      Number of columns in the matrix
 * @param matrix    Pointer to the matrix (flattened 1D array)
 */
void display(int rows, int cols, int *matrix);

#endif
