#include <stdio.h>

void printFibonacci(int n) {
    if (n <= 0) {
        printf("Number of terms must be a positive integer.\n");
        return;
    }
    
    long long a = 0, b = 1;

    if (n >= 1) {
        printf("%lld", a);
    }
    
    if (n >= 2) {
        printf(" %lld", b);
    }
    
    for (int i = 3; i <= n; i++) {
        long long next = a + b; 
        printf(" %lld", next);
        a = b; 
        b = next;
    }
    
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}






























