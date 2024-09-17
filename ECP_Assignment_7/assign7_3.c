#include <stdio.h>

#define SIZE 3


int sumOfRow(int matrix[SIZE][SIZE], int row);
int sumOfColumn(int matrix[SIZE][SIZE], int col);

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row, col;
    

    row = 1; 
	printf("Sum of elements in row %d: %d\n", row, sumOfRow(matrix, row));
    
    
    col = 2; 
    printf("Sum of elements in column %d: %d\n", col, sumOfColumn(matrix, col));

    return 0;
}

int sumOfRow(int matrix[SIZE][SIZE], int row) {
    int sum = 0;
    if (row < 0 || row >= SIZE) {
        printf("Invalid row index!\n");
        return -1; 
    }
    for (int i = 0; i < SIZE; i++) {
        sum += matrix[row][i];
    }
    return sum;
}

int sumOfColumn(int matrix[SIZE][SIZE], int col) {
    int sum = 0;
    if (col < 0 || col >= SIZE) {
        printf("Invalid column index!\n");
        return -1; 
    }
    for (int i = 0; i < SIZE; i++) {
        sum += matrix[i][col];
    }
    return sum;
}






















































