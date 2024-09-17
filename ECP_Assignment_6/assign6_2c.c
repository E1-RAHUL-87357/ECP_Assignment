#include <stdio.h>

char* my_strcat(char *dest, const char *src) {
    char *original_dest = dest; 
   
    while (*dest) {
        dest++;
    }
   
    while (*src) {
        *dest++ = *src++;
    }

      *dest = '\0';

    return original_dest; 

	}

int main() {
    char dest[100];
    char src[50];
   
    printf("Enter the destination string: ");
    fgets(dest, sizeof(dest), stdin);
   
    dest[strcspn(dest, "\n")] = '\0';

   
    printf("Enter the source string: ");
    fgets(src, sizeof(src), stdin);

   
    src[strcspn(src, "\n")] = '\0';

   
    my_strcat(dest, src);

   
    printf("Concatenated string: %s\n", dest);

    return 0;
}















































