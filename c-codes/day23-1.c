/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 23  QUESTION-1

PROBLEM STATEMENT: 
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22
*/

#include<stdio.h>
int main(){
    int nume,deno,n;
    float sum;
    scanf("%d",&n);
    sum = 0.00;
    nume=2;
    deno =3 ;
    for (int i = 1;i<=n;i++){ 
        sum += (float)nume/deno;
        nume +=2;
        deno += 4;
    }
    printf("Approximate sum: %f",sum);
    return 0;
}


