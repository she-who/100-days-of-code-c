/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 6   QUESTION-2

PROBLEM STATEMENT: 
 Q12 Write a program to input an integer and check wheteher  it is positive, negative or zero using nested if-else
*/
# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }
    else{
        if(n<0){
            printf("Negative");
        }
        else{
            printf("Zero");
        }
    }
    return 0;
}