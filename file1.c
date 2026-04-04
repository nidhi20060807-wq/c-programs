#include<stdio.h>

int main(){
    FILE *fp;
    char name[20];

    fp = fopen("test.txt", "w");

    if(fp == NULL){
        printf("File not opened\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    fprintf(fp, "%s", name);

    printf("Data written successfully!\n");

    fclose(fp);

    return 0;
}
