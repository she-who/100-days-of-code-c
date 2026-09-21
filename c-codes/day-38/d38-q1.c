/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 38   QUESTION-1

PROBLEM STATEMENT:
Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main(){ 
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("matrix 1 : \n");
    for(int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            int el;
            scanf("%d",&el);
            arr[i][j]=el;
        }
    }
    printf("array 2:\n");
    int brr[r][c];
    for(int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            int el;
            scanf("%d",&el);
            brr[i][j]=el;
        }
    }
    printf("sum of arrays :\n");
    for (int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            int sum = 0;
            sum = arr[i][j] + brr [i][j];
            printf("%d ",sum);
        }
        printf("\n");

    }
    return 0;
}