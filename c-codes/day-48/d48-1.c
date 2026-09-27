/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 48   QUESTION-1
PROBLEM STATEMENT: 
Q95: Check if one string is a rotation of another.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    char temp[200];

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}