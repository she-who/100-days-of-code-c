/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 18  QUESTION-2

PROBLEM STATEMENT: 
Q36: Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2, hcf = 1;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure positive values
    int n1 = (num1 > 0) ? num1 : -num1;
    int n2 = (num2 > 0) ? num2 : -num2;

    // Find the minimum of the two numbers
    int min = (n1 < n2) ? n1 : n2;

    // Check downwards from the minimum value to find the highest common factor
    for (int i = min; i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
            break; // Stop immediately upon finding the highest factor
        }
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}

