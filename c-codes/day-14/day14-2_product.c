/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 14  QUESTION-2

PROBLEM STATEMENT: 
Q28: Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>
int main(){
    int n,pro;
    scanf("%d",&n);
    pro = 1;
    for (int i=2;i<=n;i+=2){
        pro *= i;
    }
    printf("%d",pro);
    return 0;
}