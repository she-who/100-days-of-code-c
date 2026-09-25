/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 47   QUESTION-2

PROBLEM STATEMENT: 
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    char longest[50] = "";
    char current[50] = "";
    int i = 0, j = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            current[0] = '\0';
            j = 0;
        } else {
            current[j++] = sentence[i];
            current[j] = '\0';
        }
        i++;
    }

    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("%s\n", longest);
    return 0;
}
