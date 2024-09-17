#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols);
void freeMatrix(int** matrix, int rows);
void printMatrix(int** matrix, int rows, int cols);

int main() {
    int rows = 3;
    int cols = 3;


    int** matrix = allocateMatrix(rows, cols);





    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Free the allocated memory
    freeMatrix(matrix, rows);

    return 0;
}

// Function to allocate memory for a 2D matrix
int** allocateMatrix(int rows, int cols) {
    // Allocate memory for the array of row pointers
    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    return matrix;
}

// Function to free the memory allocated for a 2D matrix
void freeMatrix(int** matrix, int rows) {
    // Free memory allocated for each row
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    // Free the memory allocated for the array of row pointers
    free(matrix);
}

// Function to print a 2D matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}





















































