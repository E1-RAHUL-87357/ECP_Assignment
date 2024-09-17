#include <stdio.h>
#include <ctype.h>

void checkAndXOR(char c) {
    
    if (isalpha(c)) {
        
        char result = c ^ 0x20; // XOR with 0x20
        printf("Original character: %c\n", c);
        printf("Character after XOR with 32: %c\n", result);
    } else {
        printf("Character '%c' is not an alphabet.\n", c);
    }
}

int main() {
    
    char testChar = 'A';
    
    printf("Enter the test Character: ");
    scanf("%c",&testChar);
    
    checkAndXOR(testChar);
    
    return 0;
}






































