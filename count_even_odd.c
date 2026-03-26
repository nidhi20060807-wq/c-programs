#include<stdio.h>

int main(){

int size;
int count_even = 0;
int count_odd = 0;

printf("Enter the size: ");
scanf("%d",&size);

int arr[size];

printf("Enter the elements:\n");

for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<size;i++){
    if(arr[i] % 2 == 0){
        count_even++;
    }
    else{
        count_odd++;
    }
}

printf("Even numbers: %d\n",count_even);
printf("Odd numbers: %d\n",count_odd);

return 0;
}
