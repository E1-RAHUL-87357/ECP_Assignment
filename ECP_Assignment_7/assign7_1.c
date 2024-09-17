#include <stdio.h>
#include <stdlib.h>

void accept2DArray(int ***array, int *rows, int *cols) {
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", rows);
    printf("Enter the number of columns: ");
    scanf("%d", cols);

     *array = (int **)malloc(*rows * sizeof(int *));
    for (i = 0; i < *rows; i++) {
        (*array)[i] = (int *)malloc(*cols * sizeof(int));
    }

     printf("Enter the elements of the array:\n");
    for (i = 0; i < *rows; i++) {
        for (j = 0; j < *cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &(*array)[i][j]);
        }
    }
}

void print2DArray(int **array, int rows, int cols) {
    int i, j;

    printf("The 2-D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int **array;
    int rows, cols;

    accept2DArray(&array, &rows, &cols);
    print2DArray(array, rows, cols);

    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}












































