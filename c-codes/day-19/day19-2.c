/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 19  QUESTION-2

PROBLEM STATEMENT: 
Q38: Write a program to find the sum of digits of a number.
*/
#include<stdio.h>
int main(){
    int num,number,sum;
    sum = 0;
    scanf("%d",&num);
    number = num;
    for (int i=10;i<=number*10;i*=10){
        sum +=(num%10);
        num = num/ 10;
    }
    printf("%d",sum);
   return 0;
}