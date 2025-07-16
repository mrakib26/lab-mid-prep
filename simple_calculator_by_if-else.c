//Simple calculator using if-else.
#include<stdio.h>
int main()
{
    float num1, num2; 
    char op; 

    printf("Enter number-01: "); 
    scanf("%f", &num1); 
    printf("Enter any operator (+,-,*,/): "); 
    scanf(" %c", &op); 
    printf("Enter number-02: "); 
    scanf("%f", &num2); 

    if (op=='+') {
        printf("Sum = %.2f\n",num1+num2); 
    } 
    if (op=='-') {
        printf("Difference = %.2f\n",num1-num2); 
    } 
    if (op=='*') {
        printf("Product = %.2f\n",num1*num2); 
    } 
    if (op=='/') {
        if (num2!=0) {
            printf("Quotient = %f\n", num1/num2); 
        }
        else {
            printf("Quotient = Undefined.\n"); 
        }
    }
    else {
        printf("Invalid Operator."); 
    }
    return 0; 
}
