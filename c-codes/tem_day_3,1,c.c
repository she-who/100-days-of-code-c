/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 3   QUESTION-1

PROBLEM STATEMENT: 
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include<stdio.h>
int main(){
    float cel;
    scanf("%f",&cel);
    float far = (cel*9/5)+32;
    printf("fahrenheit = %f",far);
    return 0;
}