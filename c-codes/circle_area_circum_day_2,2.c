//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    int rad;
    float area,circumference;
    scanf("%d", &rad);
    area = 3.14 * rad * rad;
    circumference = 2 * 3.14 * rad;
    printf("Area = %.2f, Circumference = %.2f",area,circumference);
    return 0;
}