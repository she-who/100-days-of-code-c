/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 21  QUESTION-2

PROBLEM STATEMENT: 
Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    sum = 0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum += i;
        }
    }
    if (sum == n){
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT PERFECT NUMBER");
    }
    return 0;
}