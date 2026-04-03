struct Student {
    int age;
};

void fun(struct Student **p) {
    static struct Student s = {100};
    *p = &s;
}

int main() {
    struct Student *ptr = NULL;

    fun(&ptr);

    printf("%d", ptr->age);
}
