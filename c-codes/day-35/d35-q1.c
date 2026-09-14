/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 35  QUESTION-1

PROBLEM STATEMENT:
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50 
Output 1:
40

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
    int flag = n;
    while(flag >= 1){    
        for (int i=0;i<n;i++){
            if (arr[i]<arr[i+1]){
                int swap;
                swap = arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = swap;
            }
        }
        flag -=1;
    }
    
    printf("Second largest : %d",arr[1]);
    return 0;

}