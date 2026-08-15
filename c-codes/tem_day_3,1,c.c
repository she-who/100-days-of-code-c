//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>
int main(){
    float cel;
    scanf("%f",&cel);
    float far = (cel*9/5)+32;
    printf("fahrenheit = %f",far);
    return 0;
}