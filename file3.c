#include<stdio.h>

int main (){
    FILE *fptr;
    char ch;
    int count = 0;

    fptr = fopen("data.txt","r");

    if(fptr == NULL){
        printf("File not opened\n");
        return 1;
    }

    while((ch = fgetc(fptr)) != EOF){
        count++;
    }

    printf("Characters: %d\n", count);

    fclose(fptr);
    return 0;
}
