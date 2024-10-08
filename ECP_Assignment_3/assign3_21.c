#include<stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int start, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &start);
    
    int num = start + 1;

    printf("First 5 prime numbers after %d are:\n",start);
    
	while (count < 5) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    printf("\n");
    
    return 0;
}














