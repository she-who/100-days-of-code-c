/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 37   QUESTION-2

PROBLEM STATEMENT: 
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    printf("\n");
    for(int i=0;i<c;i++){
        for (int j= 0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}