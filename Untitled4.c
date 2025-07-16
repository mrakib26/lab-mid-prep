// Write a program to check if a number is armstrong or not.
#include<stdio.h>
#include<math.h>

int main()
{
    int num, count = 0, r, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    int n = num;

    // Counting Digits.
    while(n!=0) {
        n = n/10;
        count++;
    }

    // Calculating Sum of digits raised to the power of count.
    temp = num;
    while (temp!=0) {
        r = temp%10;
        sum = sum + pow(r,count);
        temp = temp/10;
    }

    // Printing the output.
    if (sum==num) {
        printf("%d is an Armstrong Number.\n", num);
    }
    else {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}
