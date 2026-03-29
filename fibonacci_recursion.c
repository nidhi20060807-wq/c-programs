#include<stdio.h>

int Fibonacci(int n);

int main(){
    int num;
    printf("Please enter the number:\n");
    scanf("%d",&num);

    for(int i=0; i<=num; i++){
        int res = Fibonacci(i);
        printf("%d\t", res);
    }

    return 0;
}

int Fibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}
