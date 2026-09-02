/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 14  QUESTION-1

PROBLEM STATEMENT: 
Q27: Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    sum = 0;
    for (int i=1;n>0;i+=2){
        sum += i;
        n-=1;
    }
    printf("%d",sum);
    return 0;
}