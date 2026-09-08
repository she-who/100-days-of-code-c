/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 30  QUESTION-2

PROBLEM STATEMENT:
Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/


#include<stdio.h>
int main(){
    int n,pos=0,neg=0,zero=0;
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            zero++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            pos++;
        }
    }
    printf("positive = %d : negative = %d : zero = %d",pos,neg,zero);
    return 0;
    
}