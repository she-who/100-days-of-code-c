/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 44   QUESTION-2

PROBLEM STATEMENT: 
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            printf("-");
        } else {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}