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
    int num,number,sum,fact;
    sum = 0;
    scanf("%d",&num);
    number = num;
    for (int i=1;i<=number*10;i*=10){
        fact = 1;
        for(int j = 1;j<=num%10;j++){
            fact*=j;
        }
        sum +=fact;
        num = num/ 10;
    }
    if(number==sum-1){
        printf("STRONG NUMBER");
    }
    else{
        printf("NOT A STRONG NUMBER");
    }
   return 0;
}