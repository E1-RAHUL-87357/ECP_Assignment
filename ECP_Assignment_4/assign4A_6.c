#include <stdio.h>

void printPascal(int rows) {
    int i, j;
    
    for (i = 0; i < rows; i++) {
       
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
                int num = 1;  
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); 
        }
        
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printPascal(rows);

    return 0;
}


































