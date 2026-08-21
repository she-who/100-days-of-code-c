/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 12  QUESTION-1

PROBLEM STATEMENT: 
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
# include <stdio.h>
int main(){
    int day,fine;
    scanf("%d",&day);
    if (day <= 5 ){
        fine = 2*day;
        printf("fine %d \n",fine);
    }
    else if (day >5 && day<=10){
        fine = 10 + (day-5)*4;
        printf("fine %d \n",fine);
    }
    else if(day > 10 && day <= 20){
        fine = 30 + (day -10)*6;
        printf("fine %d \n",fine);
    }
    else{
        printf("membership cancelled\n");
    }
    return 0;
}