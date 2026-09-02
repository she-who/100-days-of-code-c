/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 11  QUESTION-2

PROBLEM STATEMENT: 
Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>
int main(){
    int cp ,sp;
    scanf("%d %d",&cp,&sp);
    if (sp>cp){
        int prof_p = (sp-cp)*100/cp;
        printf("Profit %d %%\n",prof_p);
    }
    else if (sp == cp) {
        printf("No Profit No Loss");
    }
    else{
        int loss_p = (cp -sp)*100/cp ;
        printf("Loss %d %%\n ",loss_p);
    }
    return 0;
}