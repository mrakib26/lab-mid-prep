// Scan and display multiple data types: int, float, char, double.
#include <stdio.h>

int main() {
    int i;
    float f;
    char c;
    double d;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    // To consume the leftover newline from previous input
    getchar();

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Enter a double: ");
    scanf("%lf", &d);

    // Output
    printf("\nYou entered:\n");
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("Double: %.4lf\n", d);

    return 0;
}
