// Check triangle type using 3 sides: Equilateral, Isosceles, Scalene.
#include<stdio.h>
int main()
{
    int side1, side2, side3; 

    printf("Enter side-1: "); 
    scanf("%d", &side1); 
    printf("Enter side-2: "); 
    scanf("%d", &side2); 
    printf("Enter side-3: "); 
    scanf("%d", &side3); 
    
    if (side1 == side2 && side2 == side3) {
        printf("This is a Equilateral triangle.\n"); 
    }
    else if (side1==side2 || side2==side3 || side3==side1) {
        printf("This is a Isosceles triangle.\n"); 
    }
    else {
        printf("This is a Scalene triangle.\n"); 
    }
    return 0; 
}