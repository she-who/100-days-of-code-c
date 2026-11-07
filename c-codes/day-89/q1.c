/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 89

PROBLEM STATEMENT:
Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}