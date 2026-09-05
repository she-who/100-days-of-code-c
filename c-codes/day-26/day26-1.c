/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 26  QUESTION-1

PROBLEM STATEMENT: 
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include<stdio.h>
int main(){
    for (int i =5;i>=1;i--){
        for (int k=1;k<=i;k++){
            printf(" ");
        }
        for (int j = i;j<=5;j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}