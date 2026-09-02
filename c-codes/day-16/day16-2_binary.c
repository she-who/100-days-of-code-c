/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 16  QUESTION-2

PROBLEM STATEMENT: 
Q31: Write a program to take a number as input and print its equivalent binary representation.
*/


#include <stdio.h>

int main() {

    int n, binary = 0, place = 1, rem;

    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        binary = binary + (rem * place);
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}