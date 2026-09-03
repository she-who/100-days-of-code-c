/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 24  QUESTION-2

PROBLEM STATEMENT: 
Q48: Write a program to print the following pattern:
1
12
123
1234
12345


Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include<stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}