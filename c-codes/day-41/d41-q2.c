/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 41   QUESTION-2

PROBLEM STATEMENT: 
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
