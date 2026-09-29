/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 50   QUESTION-1

PROBLEM STATEMENT: 
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include<stdio.h>

int main(){
    int date,month,year;
    scanf("%d/%d/%d",&date,&month,&year);
    char months[12][4]={"Jan", "Feb", "Mar", "Apr","May", "Jun", "Jul", "Aug","Sep", "Oct", "Nov", "Dec"};
    if(date > 0 && year>1000 && year<10000){
        printf("%d-%s-%d", date, months[month], year);
    }

    else{
        printf("invalid");
    }
    
    return 0;
}