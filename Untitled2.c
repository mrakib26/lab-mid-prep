// Menu-driven program using switch (e.g., for different operations).
#include<stdio.h>
int main()
{
    int choice;
    float num1, num2;

    while(1) {
        printf("\n--------Menu-------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice(1-5): ");
        scanf("%d", &choice);

        if (choice==5) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter number-1: ");
        scanf("%f", &num1);
        printf("Enter number-2: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                printf("Sum = %.2f\n", num1+num2);
                break;
            case 2:

                printf("Difference = %.2f\n", num1-num2);
                break;
            case 3:

                printf("Product = %.2f\n", num1*num2);
                break;
            case 4:

                if (num2!=0) {
                    printf("Quotient = %.2f\n", num1/num2);
                }
                else {
                    printf("Quotient = Undefined\n");
                }
                break;
            default:
                printf("Invalid choice. Please select between 1 to 5!\n");
        }
    }
    return 0;
}
