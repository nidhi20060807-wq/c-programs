#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print initial values
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int new_size = 6;

    int *temp = (int*)realloc(arr, new_size * sizeof(int));
    if(temp == NULL) {
        printf("Realloc failed\n");
        free(arr);
        return 1;
    }
    arr = temp;

    // Add new elements
    for(int i = n; i < new_size; i++) {
        arr[i] = i * 2;
    }

    printf("\nUpdated array:\n");
    for(int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
