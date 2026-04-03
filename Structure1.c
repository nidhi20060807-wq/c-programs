struct Student {
    int age;
    float marks;
};

int main() {
    struct Student s1 = {20, 85.5};
    printf("%d %.1f", s1.age, s1.marks);
}
