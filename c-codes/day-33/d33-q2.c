/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 33  QUESTION-2

PROBLEM STATEMENT:
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void insertSorted(int arr[], int *n, int capacity, int element) {
    if (*n >= capacity) {
        return; 
    }

    int i = *n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = element;
    (*n)++;
}

int main() {
    int n = 5;
    int arr[100] = {1, 2, 4, 5, 6}; 
    int element = 3;

    insertSorted(arr, &n, 100, element);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}