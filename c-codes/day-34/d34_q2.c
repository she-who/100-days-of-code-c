/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 34  QUESTION-1

PROBLEM STATEMENT:
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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

    int index,len;
    scanf("%d",&index);
    len = n-1;
    int brr[len];
    for (int i=0;i<len;i++){
        if(i<index){
            brr[i] = arr[i];
        }
        else {
            brr[i] = arr[i+1];
        }
        printf("%d ",brr[i]);
    }
    return 0;
}