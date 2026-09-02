/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 9   QUESTION-1

PROBLEM STATEMENT: 
Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/
# include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d, r1,r2;
    scanf("%d %d %d",&a,&b,&c);
    d = (pow(b,2)) - (4*a*c);
    if (d>=0){
        r1 = ((0-b) + sqrt(d))/2*a;
        r2 = ((0-b) - sqrt(d))/2*a;
        if (d>0){
            printf("Roots are real and different: %d, %d",r1,r2);
        }
        else{
            printf("Roots are real and same: %d, %d",r1,r2);
        }
    }
    else{
        printf("Roots are complex");
    }
    return 0;
}