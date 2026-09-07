/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 29  QUESTION-1

PROBLEM STATEMENT:
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main(){
    int n,max,min;
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    printf("\n");
    max = arr[0];
    min = arr[0];
    for (int i =1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("max :%d\nmin: %d",max,min);
    
    return 0;
}