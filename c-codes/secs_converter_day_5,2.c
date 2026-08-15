/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 5   QUESTION-2

PROBLEM STATEMENT: 
Q10 Write a program to input time in seconds and convert it into hours:minutes:seconds format
*/
# include<stdio.h>
int main(){
    int Sec_in , hrs ,mins ,sec;
    scanf("%d", &Sec_in);
    hrs = Sec_in / 3600;
    mins = (Sec_in % 3600) / 60;
    sec = (mins % 60);
    printf("%d:%d:%d", hrs, mins, sec);
    return 0;
}