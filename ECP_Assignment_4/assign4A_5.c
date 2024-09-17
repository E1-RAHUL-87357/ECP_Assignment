#include <stdio.h>

void printChar(char ch, int times);

int main() {
    char character;
    int count;
    printf("Enter the character to print: ");
    scanf(" %c", &character);   
    printf("Enter the number of times to print the character: ");
    scanf("%d", &count);
    printChar(character, count);
    return 0;
}
void printChar(char ch, int times) {
    for (int i = 0; i < times; i++) {
        putchar(ch); 
    }
    putchar('\n');  
}








































