#include<stdio.h>
int main()
{
    int a, b, temp; 
    printf("Enter a: "); 
    scanf("%d", &a); 
    printf("Enter b: "); 
    scanf("%d", &b); 

    temp = a; 
    a = b; 
    b = temp; 

    printf("a = %d \nb = %d", a, b); 
    return 0; 
}