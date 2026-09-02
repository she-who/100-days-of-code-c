/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 13  QUESTION-1

PROBLEM STATEMENT: 
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a * b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a % b);
            break;
        default:
            printf("enter correct input");
            break;

    }
    return 0;
}