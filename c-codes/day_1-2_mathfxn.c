/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 1   QUESTION-2

PROBLEM STATEMENT: 
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include<stdio.h>
int main(){
    int a,b,sum,diff,pro,quo;
    scanf("%d %d", &a,&b);
    sum = a+b;
    diff = a-b;
    pro = a*b;
    quo = a/b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",sum,diff,pro,quo);
    return 0;   
}