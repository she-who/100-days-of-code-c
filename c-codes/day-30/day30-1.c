/*
NAME: SRISHTI SAHU
BATCH: 54
SAP ID: 590037979
DAY: DAY 30  QUESTION-1

PROBLEM STATEMENT:
Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main(){
    int n,odd=0,eve=0;
    int arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            eve+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("odd =%d : even = %d",odd,eve);
    return 0;
    
}