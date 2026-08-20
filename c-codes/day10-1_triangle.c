/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 10   QUESTION-1

PROBLEM STATEMENT: 
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a == b || b == c || c==a){
        if(a==b && b == c ){
            printf("Equilateral");
        }
        else{
            printf("Isosceles");
        }
    }
    else{
        printf("Scalene");
    }
    return 0;
}