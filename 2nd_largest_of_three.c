// Find the second largest number among three numbers.
#include<stdio.h>
int main()
{
    int a, b, c; 
    // int max, second=-999999; 
    
    printf("Enter 3 numbers: "); 
    scanf("%d %d %d", &a, &b, &c); 

    // max = a; 
    // if (b>max) {
    //     max = b; 
    // }
    // if (c>max) {
    //     max = c; 
    // }

    // if (a!=max && a>second) {
    //     second = a; 
    // }
    // if (b!=max && b>second) {
    //     second = b; 
    // }
    // if (c!=max && c>second) {
    //     second = c; 
    // }

    int second; 
    if ((a>b && a<c) || (a>c && a<b)) {
        second = a; 
    }
    else if ((b>a && b<c) || (b>c && b<a)) {
        second = b; 
    }
    else {
        second = c; 
    }

    printf("The 2nd largest number is: %d", second); 

    return 0; 
}