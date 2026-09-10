/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 32  QUESTION-2

PROBLEM STATEMENT:
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    printf("Enter an integer number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    num = llabs(num);
    int freq[10] = {0};
    if (num == 0) {
        freq[0] = 1;
    }
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    int max_freq = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }
    printf("The digit that occurs the most is %d (appears %d times).\n", most_frequent_digit, max_freq);

    return 0;
}