/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 20  QUESTION-2

PROBLEM STATEMENT: 
Q40: Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>

int main() {
    unsigned char num = 5; // In binary (8-bit): 00000101
    
    // ~num flips all bits, resulting in: 11111010 (250 in decimal)
    unsigned char complement = ~num; 

    printf("Original decimal: %d\n", num);
    printf("1's complement decimal: %d\n", complement);

    return 0;
}
