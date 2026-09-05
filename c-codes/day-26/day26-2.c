/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 26  QUESTION-2

PROBLEM STATEMENT: 
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



*/
#include <stdio.h>
int main(){
    for (int i=1;i<=5;i+=2){
        for(int j=1;j<=i;j++){
            printf("*\n");
        }
        printf("\n");
    }
    for (int i=3;i>=1;i-=2){
        for(int j=1;j<=i;j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}