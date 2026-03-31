#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr, int n);

int main() {
    int size;

    printf("Enter the size:\n");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i));
    }

    reverse(arr, size);

    free(arr);  

    return 0;
}

void reverse(int *arr, int n) {
    int temp;

    for(int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}
