// Find the 2nd biggest among four numbers. 
#include<stdio.h>
int main()
{
    int a, b, c, d; 
    int max, second=-999999; 

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a; 
    if (b>max) {
        max = b; 
    }
    if (c>max) {
        max = c; 
    }
    if (d>max) {
        max = d; 
    }

    if (a!=max && a>second) {
        second = a; 
    }
    if (b!=max && b>second) {
        second = b; 
    }
    if (c!=max && c>second) {
        second = c; 
    }
    if (d!=max && d>second) {
        second = d; 
    }

    printf("The second largest number is: %d", second); 
    return 0; 
}
