//Simple calculator using switch case. 
#include<stdio.h>
int main()
{
    float num1, num2, sum=0, diff=0, prod=1, quo; 
    char op; 
    
    printf("Enter number-01: "); 
    scanf("%f", &num1); 
    printf("Enter any operator (+,-,*,/): "); 
    scanf(" %c", &op); 
    printf("Enter number-02: "); 
    scanf("%f", &num2); 

    switch(op) {
        case '+': 
            sum = num1 + num2; 
            printf("Sum = %0.2f", sum);
            break; 
        case '-': 
            diff = num1-num2; 
            printf("Difference = %.2f", diff); 
            break; 
        case '*': 
            prod = num1*num2; 
            printf("Product = %.2f", prod); 
            break; 
        case '/': 
            
            if (num2!=0) {
                quo = num1/num2; 
                printf("Quotient = %.2f", quo);  
            }
            else {
                printf("Quotient = Undefined.\n"); 
            }
            break;
        default: 
            printf("Invalid Operator.\n"); 
    }
}