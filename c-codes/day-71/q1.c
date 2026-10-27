/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 71

PROBLEM STATEMENT:
Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("c-codes/info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}