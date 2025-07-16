// Grading system using marks (A, B, C, etc.)
#include<stdio.h>
int main()
{
    int marks; 
    printf("Enter your mark: "); 
    scanf("%d", &marks); 

    int grade = marks/10; 

    switch(grade){
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
        case 6: 
            printf("Grade = F\n"); 
            break; 
        case 7: 
            printf("Grade = C\n"); 
            break; 
        case 8: 
            printf("Grade = B\n"); 
            break; 
        case 9:
        case 10: 
            printf("Grade = A\n"); 
            break; 
        default: 
            printf("Invalid Mark.\n"); 
    }
    return 0; 
}