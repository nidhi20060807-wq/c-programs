#include<stdio.h>

int reverse(int n, int rev);

int main (){
    int number;
    printf("Enter the number to reverse:\n");
    scanf("%d", &number);

    int res = reverse(number, 0);
    printf("Reversed = %d", res);

    return 0;
}

int reverse(int n, int rev){
    if(n == 0)
        return rev;

    return reverse(n/10, rev*10 + n%10);
}
