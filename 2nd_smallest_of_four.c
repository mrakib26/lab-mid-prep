// Find the 2nd smallest number among 4 inputs.
#include<stdio.h>
int main()
{
    int a, b, c, d; 
    int min, second=999999; 

    printf("Enter 4 numbers: "); 
    scanf("%d %d %d %d", &a, &b, &c, &d); 

    min = a; 
    if (b<min){
        min = b; 
    }
    if (c<min) {
        min = c; 
    }
    if (d<min) {
        min = d; 
    }

    if (a!=min && a<second) {
        second = a; 
    }
    if (b!=min && b<second) {
        second = b; 
    }
    if (c!=min && c<second) {
        second = c; 
    }
    if (d!=min && d<second) {
        second = d; 
    }

    printf("The 2nd smallest number is: %d\n\n", second); 
        return 0; 
}