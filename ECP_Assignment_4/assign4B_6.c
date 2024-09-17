#include <stdio.h>
void printHexadecimal(unsigned int number) {
    printf("The number %u in hexadecimal is: %X\n", number, number);
}
int main() {
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);
    printHexadecimal(number);
    return 0;
}


























