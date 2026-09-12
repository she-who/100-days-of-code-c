/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 34  QUESTION-1

PROBLEM STATEMENT:
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    int index,ele;
    scanf("%d %d",&index,&ele);
    int brr[n+1];
    for (int i=0;i<n+1;i++){
        if (i == index){
            brr[index]=ele;
        }
        else if(i<index){
            brr[i] = arr[i];
        }
        else if(i>index){
            brr[i] = arr[i-1];
        }
        printf("%d ",brr[i]);
    }
    return 0;
}