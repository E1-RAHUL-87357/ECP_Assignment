#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int my_strcasecmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && tolower((unsigned char)*str1) == tolower((unsigned char)*str2)) {
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

void replace_substring_case_insensitive(char *str, const char *old_sub, const char *new_sub) {
    char buffer[1024]; 
    char *pos;
    int old_len = strlen(old_sub);
    int new_len = strlen(new_sub);
    int len_before;

    buffer[0] = '\0';

    while ((pos = strstr(str, old_sub)) != NULL) {
        
		if (my_strcasecmp(pos, old_sub) == 0) {
            
            len_before = pos - str;

            
            strncpy(buffer, str, len_before);
            buffer[len_before] = '\0';

            
			strcat(buffer, new_sub);

            
            strcat(buffer, pos + old_len);

            
            strcpy(str, buffer);
        }
        
        str = pos + old_len;
    }
}

int main() {
    char str[1024];
    char old_sub[100];
    char new_sub[100];

    
	printf("Enter the original string: ");
    
	fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    
    printf("Enter the substring to replace (case-insensitive): ");
    fgets(old_sub, sizeof(old_sub), stdin);
    
    old_sub[strcspn(old_sub, "\n")] = '\0';

    
	printf("Enter the new substring: ");
    fgets(new_sub, sizeof(new_sub), stdin);
    
    new_sub[strcspn(new_sub, "\n")] = '\0';

    
    replace_substring_case_insensitive(str, old_sub, new_sub);

    
    printf("Modified string: %s\n", str);

    return 0;
}



































