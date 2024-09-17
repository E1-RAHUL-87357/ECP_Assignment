#include <stdio.h>

char* my_strncpy(char *dest, const char *src, size_t n) {
    char *d = dest;
    const char *s = src;
    size_t i;

    for (i = 0; i < n && *s != '\0'; i++) {
        *d++ = *s++;
    }
    
	    while (i < n) {
        *d++ = '\0';
        i++;
    }

    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    my_strncpy(dest, src, 10);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}













































