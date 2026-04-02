#include<stdio.h>
#include<stdlib.h>

int main() {
    int size;
    int sum = 0;
    float avg;

    printf("Enter the size:\n");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int m;
    printf("Enter how many extra elements: ");
    scanf("%d", &m);

    int new_size = size + m;

    arr = (int*)realloc(arr, new_size * sizeof(int));

    if(arr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    for(int i = size; i < new_size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < new_size; i++) {
        sum += arr[i];
    }

    avg = (float)sum / new_size;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}
