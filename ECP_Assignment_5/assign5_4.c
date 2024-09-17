/*Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.

*/

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


int findMax(int array[], int size) {
    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    acceptArrayElements(array, size);

    printArrayElements(array, size);

    int max = findMax(array, size);
    printf("The maximum element is: %d\n", max);

    return 0;
}


























