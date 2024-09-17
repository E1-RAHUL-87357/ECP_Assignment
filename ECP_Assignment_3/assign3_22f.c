#include <stdio.h>

int main() {
    int i, j;
    char Ch;
    int n = 4;
    for (i = 0; i < n; i++) {
        Ch = 'A' + i; 
       
        for (j = 0; j < n - i; j++) {
            printf("%c ", Ch + j);
        }
        printf("\n"); 
    }

    return 0;
}





















