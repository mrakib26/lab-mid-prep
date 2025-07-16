// Reverse a number using a loop.
#include<stdio.h>
int main()
{
    int num, reversed=0, remain; 
    printf("Enter an integer: "); 
    scanf("%d", &num); 

    while (num!=0) {
        remain=num%10; 
        reversed = reversed*10 + remain; 
        num=num/10; 
    }
    printf("Reversed number = %d", reversed); 
    return 0; 
}