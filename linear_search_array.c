// Search an element in array

#include<stdio.h>

int main(){

int arr[5];
int size = 5;

for(int i=0;i<size;i++){
    printf("Enter element %d: ", i+1);
    scanf("%d",&arr[i]);
}

int element;
int found = 0;

printf("Enter the element to be searched:\n");
scanf("%d",&element);

for(int i=0;i<size;i++){
    if(arr[i]==element){
        printf("The element %d is found at index %d\n", element, i);
        found = 1;
        break;
    }
}

if(found==0){
    printf("Element not found!!\n");
}

return 0;
}
