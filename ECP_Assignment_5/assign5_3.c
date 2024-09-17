//Write a function to reverse the array elements


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

void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    acceptArrayElements(array, size);

    printf("Original ");
    printArrayElements(array, size);

    reverseArray(array, size);

    printf("Reversed ");
    printArrayElements(array, size);

    return 0;
}

































