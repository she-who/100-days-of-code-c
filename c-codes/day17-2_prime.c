/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 17  QUESTION-2

PROBLEM STATEMENT: 
Q34: Write a program to check if a number is prime.
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not a prime number");
            return 0;
        }
    }

    printf("Prime number");   
    
    return 0;
}
