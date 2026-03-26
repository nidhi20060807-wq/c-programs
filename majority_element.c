#include<stdio.h>

int main(){

int size;
printf("Enter the size of array:\n");
scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
}

for(int i=0;i<size;i++){

    int count = 0;

    for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }

    if(count > size/2){
        printf("Majority element is: %d",arr[i]);
        return 0;
    }
}

printf("No majority element");

return 0;
}
