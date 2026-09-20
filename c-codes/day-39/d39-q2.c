/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 39   QUESTION-2

PROBLEM STATEMENT: 
Q78: Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>
int main(){ 
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            int el;
            scanf("%d",&el);
            arr[i][j]=el;
        }
    }
    int sum = 0;
    for (int i=0;i<r;i++){
        sum += arr[i][i];
    }
    printf("sum =%d",sum);
    return 0;
}