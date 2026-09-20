/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 38   QUESTION-2

PROBLEM STATEMENT:
Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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

    int brr[r][c];
    for(int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for (int i=0;i<r;i++){
        for (int j= 0;j<c;j++){
            if (arr[i][j] != brr [i][j]){
                printf("F A L S E ");
                return 0;
            }
            
        }
        printf(" T R U E ");
        break;
    }
    return 0;
}