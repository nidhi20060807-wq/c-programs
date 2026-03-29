#include<stdio.h>

int reverse(int n, int rev);

int main (){
    int number;

    printf("Enter the number:\n");
    scanf("%d", &number);

    int copy_number = number;   // ✅ correct place

    int res = reverse(number, 0);

    if(res == copy_number){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }

    return 0;
}

int reverse(int n, int rev){
    if(n == 0)
        return rev;

    return reverse(n/10, rev*10 + n%10);
}
