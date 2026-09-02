/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 19  QUESTION-1

PROBLEM STATEMENT: 
Q37: Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int main() {
    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Store the maximum of n1 and n2 in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        // If max is perfectly divisible by both numbers, it's the LCM
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.\n", n1, n2, max);
            break; 
        }
        ++max; // Increment and test the next number
    }
    return 0;
}
