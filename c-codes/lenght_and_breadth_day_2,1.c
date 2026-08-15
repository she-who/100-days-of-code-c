//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int len,bre;
    scanf("%d %d", &len,&bre);
    int area,peri;
    area = len * bre;
    peri = 2 * (len + bre);
    printf("area = %d, perimeter = %d",area,peri);
}