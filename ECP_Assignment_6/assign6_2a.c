#include <stdio.h>

// Function to simulate strlen()
size_t my_strlen(const char *str) {
    size_t length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Calculate and print the length of the string
    size_t length = my_strlen(str);
    printf("Length of the string: %zu\n", length);

    return 0;
}
























































