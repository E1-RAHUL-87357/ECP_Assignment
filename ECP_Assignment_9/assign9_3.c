#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024 

void copyFileLineByLine(const char *sourceFilename, const char *destinationFilename) {
    FILE *sourceFile = fopen(sourceFilename, "r"); 
	if (sourceFile == NULL) {
        perror("Error opening source file");
        return;
    }

    FILE *destinationFile = fopen(destinationFilename, "w"); 
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile); 
		return;
    }

    char buffer[BUFFER_SIZE]; 
    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destinationFile); 
    }

    fclose(sourceFile);      
	fclose(destinationFile); 
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <sourcefile> <destinationfile>\n", argv[0]);
        return EXIT_FAILURE;
    }

    copyFileLineByLine(argv[1], argv[2]);

    return EXIT_SUCCESS;
}


































