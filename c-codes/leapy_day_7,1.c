/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 7   QUESTION-1

PROBLEM STATEMENT: 
Q13 WRITE A PROGRAM TO INPUT A YEAR AND CHECK WHETHER IT IS A LEAP YEAR OR NOT USING CONDITIONAL STATEMENTS.
*/

#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year % 4 ==0){
        if(year % 100 != 0){
            printf("leap year");}
        if(year % 400 == 0){
            printf("leap year");
        }
    }
    else{
        printf("not a leap year");
        }
        
    
}