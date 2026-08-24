/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 15  QUESTION-2

PROBLEM STATEMENT: 
Q30: Write a program to reverse a given number.
1234*/
#include<stdio.h>
int main(){
    int num,number,rev;
    rev = 0;
    scanf("%d",&num);
    number = num*10;
    for (int i=10;i<=number;i*=10){
        rev = (rev*10)+(num%10);
        num = num/ 10;
    }
    printf("%d",rev);
   return 0;
}