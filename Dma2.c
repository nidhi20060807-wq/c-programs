#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter ID and Marks: ");
    scanf("%d %f", &s->id, &s->marks);

    printf("ID: %d\nMarks: %.2f\n", s->id, s->marks);

    free(s);
    return 0;
}
