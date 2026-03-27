#include<stdio.h>
#include<string.h>

int main(){

char str1[50], str2[50];
int count[26] = {0};

// Input
printf("Enter first string:\n");
scanf("%s", str1);

printf("Enter second string:\n");
scanf("%s", str2);

// Step 1: Check length
int len1 = strlen(str1);
int len2 = strlen(str2);

if(len1 != len2){
    printf("Not Anagram");
    return 0;
}

// Step 2: Count characters
for(int i=0; i<len1; i++){
    count[str1[i] - 'a']++;   // increase
    count[str2[i] - 'a']--;   // decrease
}

// Step 3: Check counts
for(int i=0; i<26; i++){
    if(count[i] != 0){
        printf("Not Anagram");
        return 0;
    }
}

printf("Anagram");

return
