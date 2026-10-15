/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 67

PROBLEM STATEMENT:
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k++] = a[i++];
    }

    while (j < n)
    {
        merged[k++] = b[j++];
    }

    for (i = 0; i < k; i++)
    {
        printf("%d", merged[i]);

        if (i < k - 1)
            printf(" ");
    }

    return 0;
}