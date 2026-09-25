/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 40   QUESTION-1

PROBLEM STATEMENT: 
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include<stdio.h>

int main(){ 
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int first = 1;
    for (int s = 0; s < r + c - 1; s++) {
        if (s % 2 == 0) {
            for (int i = r - 1; i >= 0; i--) {
                int j = s - i;
                if (j >= 0 && j < c) {
                    if (!first) printf(" ");
                    printf("%d", arr[i][j]);
                    first = 0;
                }
            }
        } else {
            for (int i = 0; i < r; i++) {
                int j = s - i;
                if (j >= 0 && j < c) {
                    if (!first) printf(" ");
                    printf("%d", arr[i][j]);
                    first = 0;
                }
            }
        }
    }

    printf("\n");
    return 0;
}