/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 46   QUESTION-2

PROBLEM STATEMENT: 
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (seen[index] == 1) {
                printf("%c\n", ch);
                return 0;
            }
            seen[index] = 1;
        }
    }

    printf("No repeating lowercase alphabet\n");
    return 0;
}