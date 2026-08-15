/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 3   QUESTION-2

PROBLEM STATEMENT: 
Q6: Write a program to swap two numbers using a third variable.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a;
    a=b;
    b=c;
    printf("after swap %d %d",a,b);
    return 0;
}