/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 69

PROBLEM STATEMENT:
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main()
{
    int nums[100];
    int seen[1000] = {0};
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++)
    {
        if (seen[nums[i]] == 1)
        {
            printf("%d", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    printf("-1");

    return 0;
}