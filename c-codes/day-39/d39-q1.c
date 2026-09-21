/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 39   QUESTION-1

PROBLEM STATEMENT: 
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
    for (int i=0;i<r-1;i++){
        for (int j= 1;j<c;j++){
            if(arr[i][i] == arr [j][j]){
                printf("F A L S E ");
                return 0;
            }
        }
        printf("T R U E ");
        break;
    }
    return 0;
}