// Binary right angle triangle.
#include<stdio.h>
int main() 
{
    int n, row, col; 

    printf("Enter n: "); 
    scanf("%d", &n); 

    for(row=1; row<=n; row++) {
        for (col=1; col<=row; col++) {
            printf("%d ", col%2); 
        }
        printf("\n"); 
    }
}