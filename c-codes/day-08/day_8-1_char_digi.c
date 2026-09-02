/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 8   QUESTION-1

PROBLEM STATEMENT: 
Q15: Write a program to input a charecter and check whether it is an uppercase alphabet. lowewrcase alphabet,digit, or special charecter.
*/
#include<stdio.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if (chr >= 'a' && chr <= 'z'){
        printf("Lowercase alphabet");
    }
    else if(chr >= 'A' && chr <= 'Z'){
        printf("Uppercase alphabet");
    }
    else if(chr >= '0' && chr <= '9'){
        printf("Digit");
    }
    else{
        printf("special charecter");
    }
    return 0;
}