#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace_substring(char *str, const char *old_sub, const char *new_sub) {
    char buffer[1024]; 
	char *pos;
    int old_len = strlen(old_sub);
    int new_len = strlen(new_sub);
    int len_before;

       buffer[0] = '\0';

    
    while ((pos = strstr(str, old_sub)) != NULL) {
       
	   len_before = pos - str;
       
        strncpy(buffer, str, len_before);

		buffer[len_before] = '\0';
       
        strcat(buffer, new_sub);
       
        strcat(buffer, pos + old_len);

        strcpy(str, buffer);
    }
}

int main() {
    char str[1024];
    char old_sub[100];
    char new_sub[100];


    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';


    printf("Enter the substring to replace: ");
    fgets(old_sub, sizeof(old_sub), stdin);

    old_sub[strcspn(old_sub, "\n")] = '\0';


    printf("Enter the new substring: ");

	fgets(new_sub, sizeof(new_sub), stdin);
    
	new_sub[strcspn(new_sub, "\n")] = '\0';

    replace_substring(str, old_sub, new_sub);

    printf("Modified string: %s\n", str);

    return 0;
}











































