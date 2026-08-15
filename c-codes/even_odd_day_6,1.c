//Q11 Write a program to input an integer and check whether it is even or odd using if-else

# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2 == 0 )
        printf("%d IS EVEN");
    
    else
        printf("%d IS ODD");
    return 0;
}