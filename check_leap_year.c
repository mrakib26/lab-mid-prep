// Write a C program to check if a number is leap year or not. 
#include<stdio.h>
int main()
{
    int year; 
    printf("Enter any year: "); 
    scanf("%d", &year); 

    if(year%400==0) {
        printf("Leap Year.\n"); 
    }
    else if (year%4==0 && year%100!=0) {
        printf("Leap Year.\n"); 
    }
    else {
        printf("Not leap year.\n\n"); 
    }
    return 0; 
}