#include<stdio.h>

int main(){
    FILE *fptr;
    int num, max;

    fptr = fopen("data.txt","r");

    if(fptr == NULL){
        printf("File not opened\n");
        return 1;
    }

    // Read first number
    if(fscanf(fptr,"%d",&max) == EOF){
        printf("File is empty\n");
        return 1;
    }

    // Compare with remaining numbers
    while(fscanf(fptr,"%d",&num) != EOF){
        if(num > max){
            max = num;
        }
    }

    printf("Max = %d\n", max);

    fclose(fptr);
    return 0;
}
