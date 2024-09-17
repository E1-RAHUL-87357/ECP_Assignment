/* Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required*/



#include <stdio.h>

void acceptArrayElements(int array[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void printArrayElements(int array[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    acceptArrayElements(array, size);

    printArrayElements(array, size);

    return 0;
}













































