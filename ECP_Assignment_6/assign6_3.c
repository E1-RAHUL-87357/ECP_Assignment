
#include <stdio.h>

void remove_char(char *str, char ch) {
    char *src = str; 
    char *dst = str; 

    while (*src != '\0') {
        if (*src != ch) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';  
}

int main() {
    char str[100];
    char ch;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
  
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to remove: ");
    scanf(" %c", &ch); 

    remove_char(str, ch);

    printf("Modified string: %s\n", str);

    return 0;
}











































