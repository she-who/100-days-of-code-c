/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 23  QUESTION-2

PROBLEM STATEMENT: 
Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include<stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}