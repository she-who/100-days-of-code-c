/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 49   QUESTION-1
PROBLEM STATEMENT: 
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    scanf(" %[^\n]", name);

    printf("%c.", name[0]);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}