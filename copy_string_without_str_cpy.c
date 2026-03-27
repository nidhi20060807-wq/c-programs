#include<stdio.h>

int main(){

char str[50];
char copy_str[50];
int index=0;

printf("Enter the string:\n");
scanf("%s",str);

for(int i=0; str[i]!='\0'; i++){
copy_str[index]=str[i];
index++;
}

copy_str[index]='\0';

printf("Copied string is: %s",copy_str);

return 0;
}
