/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 25  QUESTION-1

PROBLEM STATEMENT:
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include<stdio.h>
int main(){
    for (int i=1;i<=10;i+=2){
        for (int j=1;j<=i;j+=1){
            printf("*");
        }
        printf("\n");
    }
    for (int i=7;i>=1;i-=2){
        for (int j=i;j>=1;j-=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}