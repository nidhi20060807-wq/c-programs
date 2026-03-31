#include<stdio.h>

int sum(int *arr, int n);

int main() {
    int arr[] = {1, 6, 8, 6, 9};

    int res = sum(arr, 5);   // ✅ pass array (base address)

    printf("%d", res);

    return 0;
}

int sum(int *arr, int n) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += arr[i];   // or *(arr + i)
    }

    return s;
}
