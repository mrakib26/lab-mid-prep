// Check if a number is palindrome or not.
#include<stdio.h>
int main()
{
    int n, reversed = 0, remain;  
    printf("Enter an integer: "); 
    scanf("%d",&n); 

    int num = n;
    
    while (num!=0) {
        remain = num%10; 
        reversed = reversed*10 + remain;
        num = num/10; 
    }
    if (n==reversed) {
        printf("%d is a palindrome number.\n", n); 
    }
    else {
        printf("%d is not a palindrome number.\n", n); 
    }
}