/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 78

PROBLEM STATEMENT:
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0;
    int consonants = 0;

    fp = fopen("c-codes/info.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' ||
                ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}