/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 31  QUESTION-1

PROBLEM STATEMENT:
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>
int main(){
    int n,e;
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    scanf("%d",&e);
    int flag = 1;
    for (int i=0;i<n;i++){
        if(arr[i] == e){
            printf("found at index %d",i);
            flag = 0;
            return 0;
        }
    }
    if (flag != 0){
        printf("-1");
    }
    return 0;
}