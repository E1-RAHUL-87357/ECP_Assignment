#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    char *original_dest = dest; 

    while ((*dest++ = *src++)) {
   
    }

    return original_dest;
}

int main() {
    char src[100];
    char dest[100];
   
    printf("Enter the source string: ");
    fgets(src, sizeof(src), stdin);
    
    src[strcspn(src, "\n")] = '\0';
   
    my_strcpy(dest, src);

    printf("Destination string: %s\n", dest);

    return 0;
}


































