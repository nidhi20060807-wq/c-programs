#include<stdio.h>

int main(){

int size;
printf("Enter the size:\n");
scanf("%d",&size);

int arr[size];

printf("Enter the elements:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("Array after removing duplicates:\n");

for(int i=0;i<size;i++){
    int duplicate = 0;

    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            duplicate = 1;
            break;
        }
    }

    if(duplicate==0){
        printf("%d ",arr[i]);
    }
}

return 0;
}
