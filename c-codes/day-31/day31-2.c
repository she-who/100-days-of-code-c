/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 31  QUESTION-1

PROBLEM STATEMENT:
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main(){
    int n;
    int brr[n];
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    for (int j = 0 ; j<n;j++){
        brr[j] = arr[n-j-1];
        printf("%d ",brr[j]);
    }
    return 0;
}