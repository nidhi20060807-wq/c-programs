#include<stdio.h>

int main(){
    FILE *fptr;
    char ch;
    int v=0, c=0, d=0;

    fptr = fopen("data.txt","r");

    if (fptr==NULL){
        printf("File not opened successfully\n");
        return 1;
    }

    while((ch = fgetc(fptr)) != EOF){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            v++;
        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            c++;
        }
        else if(ch>='0'&&ch<='9'){
            d++;
        }
    }

    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Digits: %d\n",d);

    fclose(fptr);
    return 0;
}
