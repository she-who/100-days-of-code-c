/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 36  QUESTION-1

PROBLEM STATEMENT:
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            int ele;
            scanf("%d ",&ele);
            arr[i][j] = ele;
        }
    }
    printf("\n");
    for (int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}