#include<stdio.h>

int main(){
    int n;

    FILE *fptr;

    fptr = fopen("file.txt","w");
    if(fptr == NULL){
        printf("File not opened successfully\n");
        return 1;
    }

    printf("Enter the n value:\n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter number:\n");
        scanf("%d",&arr[i]);
        fprintf(fptr,"%d ",arr[i]);  // space important
    }

    fclose(fptr);

    // Read and sum
    fptr = fopen("file.txt","r");
    if(fptr == NULL){
        printf("File not opened successfully\n");
        return 1;
    }

    int num, sum = 0;

    while(fscanf(fptr,"%d",&num) != EOF){
        sum += num;
    }

    printf("Sum: %d\n", sum);

    fclose(fptr);

    return 0;
}
