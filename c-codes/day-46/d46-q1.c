/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 46   QUESTION-1

PROBLEM STATEMENT: 
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            continue;
        }
        printf("%c", ch);
    }

    printf("\n");
    return 0;
}
