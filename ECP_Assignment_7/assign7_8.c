#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("No names provided.\n");
        return 1; 
    }

    char **names = argv + 1; 
  
    int numNames = argc - 1;

    qsort(names, numNames, sizeof(char *), compare);

    printf("Sorted list of names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0; 
}









































