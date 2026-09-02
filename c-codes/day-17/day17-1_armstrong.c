/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 17  QUESTION-1

PROBLEM STATEMENT: 
Q33: Write a program to check if a number is an Armstrong number.
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,p,n,sum;
    sum = p = 0;
    scanf("%d",&num);
    n = num;
    for (int i = 1 ; i < n ; i*=10){
        p += 1;
        num = num/ 10; 
    }
    num = n;
    for (int i = 10; num!=0;i*=10){
        sum = sum + (int)pow(num%10,p);
        num /= 10;
    }
    if(sum == n){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
   return 0;
}