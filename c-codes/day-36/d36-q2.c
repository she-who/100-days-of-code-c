/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 36  QUESTION-2

PROBLEM STATEMENT:
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            int ele;
            scanf("%d",&ele);
            arr[i][j] = ele;
        }
    }
    int sum=0;
    for (int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }
    printf("\n");
    printf("sum %d\n",sum);
    return 0;

}