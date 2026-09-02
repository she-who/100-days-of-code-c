/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 4   QUESTION-2

PROBLEM STATEMENT: 
Q8 Write a program to find and display the sum of first n natural numbers.
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i= 1;i<=n;i+=1){
        sum +=i;
    }
    printf("%d",sum);
    return 0;
}