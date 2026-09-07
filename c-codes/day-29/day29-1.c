/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 29  QUESTION-1

PROBLEM STATEMENT:
Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    printf("\n");
    for (int i =0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}