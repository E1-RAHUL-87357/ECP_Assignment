#include <stdio.h>
#include <stdbool.h>

bool is_char_in_set(char ch, const char *set) {
    while (*set) {
        if (ch == *set) {
            return true;
        }
        set++;
    }
    return false;
}


void remove_chars_from_string(char *str, const char *set) {
    char *src = str;  
    char *dst = str;  

    while (*src != '\0') {
        if (!is_char_in_set(*src, set)) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';  
	}

int main() {
    char str[100];
    char set[100];


    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the set of characters to remove: ");
    fgets(set, sizeof(set), stdin);
    
    set[strcspn(set, "\n")] = '\0';

    remove_chars_from_string(str, set);

    printf("Modified string: %s\n", str);

    return 0;
}


















































