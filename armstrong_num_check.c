// Write a program to check if a number is armstrong or not.
#include<stdio.h>
int main()
{
    int num, count = 0, r;
    printf("Enter number: "); 
    scanf("%d", &num); 
    int n = num; 
    while(n!=0) {
        n = n/10;
        count++;
    }
    printf("Digit Count = %d", count); 

    return 0; 
}