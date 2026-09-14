/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 35  QUESTION-1

PROBLEM STATEMENT:
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    if (scanf("%d", &k) != 1) {
        return 0;
    }
    k = k % n;
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d%s", arr[i], (i == n - k - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}