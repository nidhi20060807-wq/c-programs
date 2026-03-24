#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(int i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}
