/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 9   QUESTION-2

PROBLEM STATEMENT: 
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
# include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);
    if (grade>=90 && grade <=100)
        printf("grade A");
    else if(grade >= 80 && grade<90)
        printf("grade B");
    else if(grade >= 70 && grade<80)
        printf("grade C");
    else if(grade >= 60 && grade<70)
        printf("grade D");
    else
        printf("grade F");
    return 0;
}