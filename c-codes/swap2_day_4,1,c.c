/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 4   QUESTION-1

PROBLEM STATEMENT: 
Q7: Write a program to swap two numbers without using a third variable.
*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a = a +b;
    b = a - b;
    a = a - b;
    printf("after swap: %d %d",a,b);
    return 0;
}