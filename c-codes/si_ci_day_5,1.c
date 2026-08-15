/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 5   QUESTION-1

PROBLEM STATEMENT: 
  Q9 Write a program to calculate simple and compound interest for given principal, rate and time.
*/
#include<stdio.h>
#include<math.h>
int main(){
    float principal, time,rate,si,ci;
    scanf("%f %f %f", &principal, &rate ,&time);
    si = (principal * rate * time)/100;
    ci = (principal * pow((1 + rate/100), time)) - principal;
    printf("Simple Interest: %f\n", si);
    printf("Compound Interest: %f\n", ci);
    return 0;

}