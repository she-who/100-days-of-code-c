/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 16  QUESTION-2

PROBLEM STATEMENT: 
Q32: Write a program to check if a number is a palindrome.
*/

#include<stdio.h>
int main(){
    int num,number,rev;
    rev = 0;
    scanf("%d",&num);
    number = num;
    for (int i=10;i<=number*10;i*=10){
        rev = (rev*10)+(num%10);
        num = num/ 10;
    }
    if (rev == number){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
   return 0;
}