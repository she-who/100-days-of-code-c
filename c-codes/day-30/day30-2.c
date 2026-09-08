/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 30  QUESTION-2

PROBLEM STATEMENT:
Q60: Count positive, negative, and zero elements in an array.
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