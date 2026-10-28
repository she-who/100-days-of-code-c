/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 7

PROBLEM STATEMENT:
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0)
        average = (float)sum / count;
    else
        average = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}