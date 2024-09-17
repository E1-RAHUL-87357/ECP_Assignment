#include <stdio.h>
#include <string.h>
#include <limits.h>

// Function to convert an integer to a string in a given base
void my_itoa(int value, int base, char *str) {
    // Handle invalid base
    if (base < 2 || base > 36) {
        *str = '\0'; // Return an empty string
        return;
    }

    // Handle special case for zero
    if (value == 0) {
        *str++ = '0';
        *str = '\0';
        return;
    }

    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char buffer[33]; // Buffer to hold the number in reverse
    int i = 0;
    int is_negative = 0;

    // Handle negative numbers for base 10
    if (value < 0 && base == 10) {
        is_negative = 1;
        value = -value;
    }

    // Convert number to the specified base
    while (value != 0) {
        buffer[i++] = digits[value % base];
        value /= base;
    }

    // Add negative sign for base 10
    if (is_negative) {
        buffer[i++] = '-';
    }

    // Null-terminate the string
    buffer[i] = '\0';

    // Reverse the buffer and copy to the result string
    int j = 0;
    while (i > 0) {
        str[j++] = buffer[--i];
    }
    str[j] = '\0';
}

int main() {
    int num, base;
    char str[33]; // Buffer to hold the resulting string

    // Input number and base
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the base (2-36): ");
    scanf("%d", &base);

    my_itoa(num, base, str);

    printf("Number in base %d: %s\n", base, str);

    return 0;
}










































