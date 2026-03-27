#include<stdio.h>

int main(){

char str1[50], str2[50], result[100];
int j=0;

printf("Enter string1:\n");
scanf("%s",str1);

printf("Enter string2:\n");
scanf("%s",str2);

// Copy first string
for(int i=0; str1[i]!='\0'; i++){
    result[j++] = str1[i];
}

// Append second string
for(int i=0; str2[i]!='\0'; i++){
    result[j++] = str2[i];
}

// End string
result[j] = '\0';

printf("Concatenated string: %s", result);

return 0;
}
