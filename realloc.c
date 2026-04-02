#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize first part
    for(int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    int new_size = 10;

    int *temp = (int*)realloc(arr, new_size * sizeof(int));
    if(temp == NULL) {
        printf("Reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = temp;

    // Input remaining elements
    for(int i = n; i < new_size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Print all elements
    printf("Final array:\n");
    for(int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // free at the end only

    return 0;
}
