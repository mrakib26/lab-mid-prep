// Print the multiplication table of a given number.
#include<stdio.h>
int main()
{
    int n, table; 
    printf("Enter a number: "); 
    scanf("%d", &n); 

    printf("Table of %d: \n", n); 
    for (int i=1; i<=10; i++) {
        table = n*i;
        printf("%d\n", table);  
    } 
}