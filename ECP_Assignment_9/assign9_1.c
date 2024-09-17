#include <stdio.h>
#include <stdlib.h>

void displayFileContent(const char *filename)
{
    FILE *file = fopen(filename, "r"); 
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int ch; 
    while ((ch = fgetc(file)) != EOF) { 
        putchar(ch); 
    }

    fclose(file); 
	}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    displayFileContent(argv[1]);

    return EXIT_SUCCESS;
}













































