/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 48   QUESTION-2

PROBLEM STATEMENT: 
Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int start = 0, end, i;
    char temp;

    scanf(" %[^\n]", str);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;

            if (str[i] == '\0')
                break;
        }
    }

    printf("%s", str);

    return 0;
}