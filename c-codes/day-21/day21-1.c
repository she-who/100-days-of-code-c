/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 21  QUESTION-1


PROBLEM STATEMENT: 
Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include<stdio.h>
int main(){
    int d,l,f,final,n;
    scanf("%d",&d);
    n=1;
    for(int i=10;i<=d;i*=10){
        n*=10;
    }
    l = d - (d/10)*10;
    f = d - (d%n);
    final = (l*n)+(d-l-f)+(f/n);
    printf("%d",final);
    return 0;

}