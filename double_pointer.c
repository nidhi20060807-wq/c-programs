#include <stdio.h>

void update(int **ptr) {
    **ptr = 50;
}

int main() {
    int x = 10;
    int *p = &x;

    update(&p);

    printf("%d", x);

    return 0;
}
