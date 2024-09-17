#include <stdio.h>

int countSetBits(unsigned int num);

int main() {
    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u", &num);

    int count = countSetBits(num);

    printf("The number of '1' bits in %u is: %d\n", num, count);

    return 0;
}

int countSetBits(unsigned int num) {
    int count = 0;
    
    while (num) {
     
        count += (num & 1);
        num >>= 1;
    }

    return count;
}




















































