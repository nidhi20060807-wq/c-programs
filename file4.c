#include<stdio.h>

int main (){
    FILE *fptr1;
    FILE *fptr2;
    char ch;

    fptr1 = fopen("file1.txt","r");
    if(fptr1 == NULL){
        printf("File1 not opened\n");
        return 1;
    }

    fptr2 = fopen("file2.txt","w");
    if(fptr2 == NULL){
        printf("File2 not opened\n");
        return 1;
    }

    while((ch = fgetc(fptr1)) != EOF){
        fputc(ch, fptr2);
    }

    printf("File copied successfully!\n");

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
