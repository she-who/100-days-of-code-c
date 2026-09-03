/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 25  QUESTION-2

PROBLEM STATEMENT: 
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main(){
    for (int i =5;i>=1;i--){
        for (int k =5;k>=i;k--){
            printf(" ");
        }
        for (int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}