#include<stdio.h>

int main(){

int arr[5];

for(int i=0;i<5;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
}

int largest = arr[0];
int second_largest = arr[0];

for(int i=1;i<5;i++){

    if(arr[i] > largest){
        second_largest = largest;
        largest = arr[i];
    }

    else if(arr[i] > second_largest && arr[i] != largest){
        second_largest = arr[i];
    }
}

printf("Second largest element: %d",second_largest);

return 0;
}
