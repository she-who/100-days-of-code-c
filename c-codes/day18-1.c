/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 18  QUESTION-1

PROBLEM STATEMENT: 
Q35: Write a program to print all factors of a given number.
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (n%i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}