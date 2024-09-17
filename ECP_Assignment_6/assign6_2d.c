#include <stdio.h>


int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
   
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char str1[100];
    char str2[100];

   
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
   
    str1[strcspn(str1, "\n")] = '\0';

   
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
   
    str2[strcspn(str2, "\n")] = '\0';

    int result = my_strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}






































