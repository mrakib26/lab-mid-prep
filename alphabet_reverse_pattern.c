#include<stdio.h>
int main()
{
    int n, row, col; 
    char ch; 
    printf("Enter n: "); 
    scanf("%d", &n); 

    for (row=n; row>=1; row--) {
        for (col=row; col>=1; col--) {
            printf("%c ", 'A'+col-1);
        }
        printf("\n"); 
    }
}