#include <stdio.h>

int remove_duplicates(int arr[], int size) {
    if (size == 0) return 0; 

    int unique_count = 1; 

    
    for (int i = 1; i < size; i++) {
        
        if (arr[i] != arr[unique_count - 1]) {
            arr[unique_count] = arr[i]; 
            unique_count++; 
        }
    }

    return unique_count;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique_count = remove_duplicates(arr, size);

    
    printf("Number of unique elements: %d\n", unique_count);

    printf("Array with unique elements: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





































