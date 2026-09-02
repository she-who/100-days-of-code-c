/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 22  QUESTION-2

PROBLEM STATEMENT: 
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include<stdio.h>
int main(){
    int nume,deno,n;
    float sum;
    scanf("%d",&n);
    sum = 1.00;
    nume=3;
    deno =4 ;
    for (int i = 1;i<=n;i++){ 
        sum += (float)nume/deno;
        nume +=2;
        deno += 2;
    }
    printf("Approximate sum: %.1f",sum);
    return 0;
}
