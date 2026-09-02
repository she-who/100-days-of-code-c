/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 12  QUESTION-2

PROBLEM STATEMENT: 
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

*/
#include<stdio.h>
int main(){
    int unit,bill;
    scanf("%d",&unit);
    if (unit <= 100){
        bill = unit * 5;
    }
    else if(unit>100 && unit <= 200){
        bill = 500 + (unit-100)*7;
    }
    else if(unit>200 && unit <= 300){
        bill = 1200+(unit-200)*10;
    }
    else{
        bill = 2200+(unit-300)*12;
    }
    printf("bill :Rs. %d",bill);
    return 0;
}