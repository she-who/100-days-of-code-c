/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 15  QUESTION-1

PROBLEM STATEMENT: 
Q29: Write a program to calculate the factorial of a number.
*/
#include <stdio.h>
int main(){
    int n,fact;
    scanf("%d",&n);
    fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
    
}