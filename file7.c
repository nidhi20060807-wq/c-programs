#include<stdio.h>

int main(){
    FILE *fptr;
    FILE *feven;
    FILE *fodd;

    int num;

    fptr = fopen("data.txt","r");
    if(fptr == NULL){
        printf("File not opened\n");
        return 1;
    }

    feven = fopen("even.txt","w");
    fodd = fopen("odd.txt","w");

    while(fscanf(fptr,"%d",&num) != EOF){
        if(num % 2 == 0){
            fprintf(feven,"%d ",num);
        }
        else{
            fprintf(fodd,"%d ",num);
        }
    }

    fclose(fptr);
    fclose(feven);
    fclose(fodd);

    printf("Even and Odd numbers separated successfully!\n");

    return 0;
}
