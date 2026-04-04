#include<stdio.h>

int main(){
    FILE *fptr;
    char str[50];

    fptr = fopen("data.txt", "a");

    if (fptr == NULL){
        printf("File not opened\n");
        return 1;
    }

    printf("Enter text: ");
    scanf("%s", str);

    fprintf(fptr, "%s\n", str);

    printf("Data appended successfully!\n");

    fclose(fptr);

    return 0;
}
