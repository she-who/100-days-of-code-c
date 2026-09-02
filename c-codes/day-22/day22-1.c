/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 22  QUESTION-1

PROBLEM STATEMENT: 
Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/
#include <stdio.h>

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

    int n,fact;
    scanf("%d",&n);
    fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
    
}