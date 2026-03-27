#include<stdio.h>

int main(){

char str[50];

printf("Enter the string:\n");
scanf("%s",str);

for(int i=0; str[i]!='\0'; i++){

int count=1;

for(int j=i+1; str[j]!='\0'; j++){

if(str[i]==str[j]){
count++;
str[j]='0';
}

}

if(str[i]!='0'){
printf("Count of %c is %d\n",str[i],count);
}

}

return 0;
}
