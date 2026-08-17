/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 8   QUESTION-2

PROBLEM STATEMENT: 
Q16: Write a program to input three nubers and find the largest among them using if-else.
*/

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Largest is %d",a);}
        else{
            printf("Largest is %d",c);
        }
    }
    else{
        if(b>c){
            printf("Largest is %d",b);}
        else{
            printf("Largest is %d",c);
        }
    }
    return 0;
}