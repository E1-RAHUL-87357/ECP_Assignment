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


void findMaxMin(int arr[], int size, int *max, int *min)
{
    
    if (size <= 0) {
        printf("Array is empty. Cannot determine max and min.\n");
        return;
    }
    *max = *min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];  
        }
        if (arr[i] < *min) {
            *min = arr[i];  
        }
    }
}

int main() {
    
    //int arr[] = {12, 3, 5, 7, 19, 1, 8};
    
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    acceptArrayElements(arr, size);

    printArrayElements(arr, size);
    
    int max, min;

    findMaxMin(arr, size, &max, &min);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}




























