#include<stdio.h>

int main(){

    int N;

    printf("Please enter number of students:\n");
    scanf("%d",&N);

    int arr[N];

    for(int i=0;i<N;i++){
        printf("Please enter the marks of student %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    int total_marks = 0;
    int highest_mark = arr[0];

    for(int i=0;i<N;i++){
        total_marks += arr[i];

        if(arr[i] > highest_mark){
            highest_mark = arr[i];
        }
    }

    float average_marks = (float)total_marks / N;

    printf("Total marks: %d\n", total_marks);
    printf("Average marks: %.2f\n", average_marks);
    printf("Highest mark: %d\n", highest_mark);

    return 0;
}
