// Find the biggest among three numbers. 
#include<stdio.h>
int main()
{
    int a, b, c; 
    printf("Enter a: "); 
    scanf("%d", &a); 
    printf("Enter b: "); 
    scanf("%d", &b);
    printf("Enter c: "); 
    scanf("%d", &c);

    if (a>b && a>c) {
        printf("%d is the biggest.\n", a); 
    }
    else if (b>a && b>c) {
        printf("%d is the biggest.\n", b); 
    }
    else {
        printf("%d is the biggest.\n", c); 
    }
    return 0; 
}