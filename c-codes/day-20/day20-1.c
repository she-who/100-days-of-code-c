
/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 20  QUESTION-1

PROBLEM STATEMENT: 
Q39: Write a program to find the product of odd digits of a number.
*/
#include<stdio.h>
int main(){
    int num,number,pro;
    pro = 1;
    scanf("%d",&num);
    number = num;
    for (int i=10;i<=number*10;i*=10){
        if ((num%10)%2 != 0 ){
            pro *=(num%10);
            
        }
        num = num/ 10;
    }
    printf("%d",pro);
   return 0;
}