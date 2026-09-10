/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 32  QUESTION-1

PROBLEM STATEMENT:
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n, e;
    
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }
    
    scanf("%d", &e);
    int brr[e];
    for (int i = 0; i < e; i++) {
        int a;
        scanf("%d", &a);
        brr[i] = a;
    }
    
    int fin[n + e];
    for (int i = 0; i < n; i++) {
        fin[i] = arr[i];
    }
    for (int i = 0; i < e; i++) {
        fin[n + i] = brr[i];
    }
    
    for (int i = 0; i < n + e; i++) {
        printf("%d ", fin[i]);
    }
    printf("\n");
    
    return 0;
}