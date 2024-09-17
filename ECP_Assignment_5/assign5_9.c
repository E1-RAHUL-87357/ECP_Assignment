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

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    return -1; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
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

    int target; 
    
    printf("Enter the target Element to be searched: ");
    
    scanf("%d",&target);

    int index = binarySearch(array, size, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}




































