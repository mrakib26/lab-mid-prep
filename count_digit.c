// Count the digits of a number.
#include<stdio.h>
int main()
{
    int n, r, count=0; 
    printf("Enter any number: "); 
    scanf("%d", &n); 
    if(n==0) {
        count = 1; 
    }
    else {
        while(n!=0) {
            r = n%10; 
            n = n/10; 
            count++; 
        }
    }
    printf("Digit Count = %d", count); 
    return 0; 
}