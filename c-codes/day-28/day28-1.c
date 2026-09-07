/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 28  QUESTION-1

PROBLEM STATEMENT:
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int n=2;n<=num;n++){
        int flag =1;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 0;
                continue;
            }
        }
        if (flag == 1){
            printf("%d ",n); 
        }
          
    }
    return 0;
}
