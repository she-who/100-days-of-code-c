/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 54
PROBLEM STATEMENT:
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int main()
{
    int n, x;
    int leftSum = 0;
    int rightSum;
    int totalSum;
    int pivot = -1;

    scanf("%d", &n);

    totalSum = n * (n + 1) / 2;

    for (x = 1; x <= n; x++)
    {
        leftSum += x;

        rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}